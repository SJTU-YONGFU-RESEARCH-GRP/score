import { readFileSync } from "node:fs";
import { join } from "node:path";
import { marked } from "marked";

const papersDir = join(process.cwd(), "..", "publications", "papers");

export function loadMarkdown(relpath: string): string {
  return readFileSync(join(papersDir, relpath), "utf8");
}

export function renderMarkdown(md: string): string {
  return marked.parse(md, { async: false }) as string;
}

/** Extract ## TL;DR section body from a digest. */
export function extractTldrHtml(md: string): string | null {
  const match = md.match(/^##\s*TL;DR\s*\n+([\s\S]*?)(?=\n##\s|\n#\s|$)/i);
  if (!match) return null;
  return renderMarkdown(match[1].trim());
}

export function loadChangelogHtml(): string {
  const md = readFileSync(join(papersDir, "CHANGELOG.md"), "utf8");
  return renderMarkdown(md);
}
