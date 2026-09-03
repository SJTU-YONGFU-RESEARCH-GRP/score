#!/usr/bin/env node
/**
 * Merge publications/papers/projects.csv + architecture_index.csv → site/src/data/registry.json
 * Fail fast on missing join rows or missing digest/source-note files.
 */
import { createReadStream, existsSync, mkdirSync, readFileSync, writeFileSync } from "node:fs";
import { dirname, join, resolve } from "node:path";
import { fileURLToPath } from "node:url";
import { createInterface } from "node:readline";

const __dirname = dirname(fileURLToPath(import.meta.url));
const siteRoot = resolve(__dirname, "..");
const repoRoot = resolve(siteRoot, "..");
const papersDir = join(repoRoot, "publications", "papers");
const projectsPath = join(papersDir, "projects.csv");
const indexPath = join(papersDir, "architecture_index.csv");
const outPath = join(siteRoot, "src", "data", "registry.json");

function parseCsv(text) {
  const rows = [];
  let i = 0;
  let field = "";
  let row = [];
  let inQuotes = false;
  while (i < text.length) {
    const c = text[i];
    if (inQuotes) {
      if (c === '"') {
        if (text[i + 1] === '"') {
          field += '"';
          i += 2;
          continue;
        }
        inQuotes = false;
        i++;
        continue;
      }
      field += c;
      i++;
      continue;
    }
    if (c === '"') {
      inQuotes = true;
      i++;
      continue;
    }
    if (c === ",") {
      row.push(field);
      field = "";
      i++;
      continue;
    }
    if (c === "\n" || c === "\r") {
      if (c === "\r" && text[i + 1] === "\n") i++;
      row.push(field);
      field = "";
      if (row.length > 1 || row[0] !== "") rows.push(row);
      row = [];
      i++;
      continue;
    }
    field += c;
    i++;
  }
  if (field.length || row.length) {
    row.push(field);
    rows.push(row);
  }
  if (!rows.length) return [];
  const headers = rows[0];
  return rows.slice(1).map((cells) => {
    const obj = {};
    headers.forEach((h, idx) => {
      obj[h] = cells[idx] ?? "";
    });
    return obj;
  });
}

function loadCsv(path) {
  if (!existsSync(path)) {
    throw new Error(`missing required file: ${path}`);
  }
  return parseCsv(readFileSync(path, "utf8"));
}

function extractTldr(markdown) {
  const match = markdown.match(/^##\s*TL;DR\s*\n+([\s\S]*?)(?=\n##\s|\n#\s|$)/i);
  if (!match) return null;
  return match[1].trim();
}

const projects = loadCsv(projectsPath);
const indexRows = loadCsv(indexPath);

if (!projects.length) {
  throw new Error(`no projects in ${projectsPath}`);
}
if (!indexRows.length) {
  throw new Error(`no rows in ${indexPath}`);
}

const indexByName = new Map();
for (const row of indexRows) {
  const name = row.project_name?.trim();
  if (!name) {
    throw new Error("architecture_index.csv has a row with empty project_name");
  }
  if (indexByName.has(name)) {
    throw new Error(`duplicate project_name in architecture_index.csv: ${name}`);
  }
  indexByName.set(name, row);
}

const slugSeen = new Map();
const registry = [];
const errors = [];

for (const project of projects) {
  const name = project.project_name?.trim();
  if (!name) {
    errors.push("projects.csv has a row with empty project_name");
    continue;
  }
  const idx = indexByName.get(name);
  if (!idx) {
    errors.push(`projects.csv entry "${name}" has no architecture_index.csv row`);
    continue;
  }
  indexByName.delete(name);

  const pageSlug = idx.page_slug?.trim();
  if (!pageSlug) {
    errors.push(`architecture_index.csv entry "${name}" has empty page_slug`);
    continue;
  }
  if (slugSeen.has(pageSlug)) {
    errors.push(
      `duplicate page_slug "${pageSlug}" for "${name}" and "${slugSeen.get(pageSlug)}"`,
    );
  } else {
    slugSeen.set(pageSlug, name);
  }

  const track = idx.track?.trim();
  const status = idx.status?.trim();
  const digestRel = (idx.digest_relpath || "").trim();
  const noteRel = (idx.source_note_relpath || "").trim();
  const scoreIntegrated = String(idx.score_integrated || "").trim().toLowerCase() === "true";

  if (digestRel) {
    const digestPath = join(papersDir, digestRel);
    if (!existsSync(digestPath)) {
      errors.push(`digest missing for "${name}": publications/papers/${digestRel}`);
    }
  }
  if (noteRel) {
    const notePath = join(papersDir, noteRel);
    if (!existsSync(notePath)) {
      errors.push(`source note missing for "${name}": publications/papers/${noteRel}`);
    }
  }
  if (track === "A" && !digestRel) {
    errors.push(`track A entry "${name}" requires digest_relpath`);
  }
  if (track === "B" && !noteRel) {
    errors.push(`track B entry "${name}" requires source_note_relpath`);
  }

  let tldr = null;
  let contentKind = "none";
  let contentRelpath = null;

  if (digestRel && existsSync(join(papersDir, digestRel))) {
    const md = readFileSync(join(papersDir, digestRel), "utf8");
    tldr = extractTldr(md);
    contentKind = "digest";
    contentRelpath = digestRel;
  } else if (noteRel && existsSync(join(papersDir, noteRel))) {
    contentKind = "source-note";
    contentRelpath = noteRel;
  }

  registry.push({
    project_name: name,
    page_slug: pageSlug,
    track,
    status,
    digest_relpath: digestRel || null,
    source_note_relpath: noteRel || null,
    score_integrated: scoreIntegrated,
    content_kind: contentKind,
    content_relpath: contentRelpath,
    tldr,
    category: project.category || "unknown",
    repository_url: project.repository_url || "",
    organization: project.organization || "",
    primary_isa: project.primary_isa || "",
    language_or_generator_framework: project.language_or_generator_framework || "",
    license: project.license || "",
    top_level_deliverable: project.top_level_deliverable || "",
    target_class: project.target_class || "",
    bus_or_noc_type: project.bus_or_noc_type || "",
    verification_evidence: project.verification_evidence || "",
    silicon_evidence: project.silicon_evidence || "",
    fpga_evidence: project.fpga_evidence || "",
    software_stack_support: project.software_stack_support || "",
    documentation_quality: project.documentation_quality || "",
    maintenance_activity: project.maintenance_activity || "",
    notable_strengths: project.notable_strengths || "",
    notable_limitations: project.notable_limitations || "",
    depth_of_analysis: project.depth_of_analysis || "",
  });
}

for (const leftover of indexByName.keys()) {
  errors.push(`architecture_index.csv entry "${leftover}" has no projects.csv row`);
}

if (errors.length) {
  console.error("sync-registry failed:\n" + errors.map((e) => `  - ${e}`).join("\n"));
  process.exit(1);
}

registry.sort((a, b) => a.project_name.localeCompare(b.project_name));

mkdirSync(dirname(outPath), { recursive: true });
writeFileSync(
  outPath,
  JSON.stringify(
    {
      generated_at: new Date().toISOString(),
      count: registry.length,
      projects: registry,
    },
    null,
    2,
  ) + "\n",
);

console.log(`Wrote ${registry.length} projects → ${outPath}`);
