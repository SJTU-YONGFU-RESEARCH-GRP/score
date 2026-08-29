# SCORE platform site

Static Astro site for the open-architecture registry. Deploys to GitHub Pages at:

**https://SJTU-YONGFU-RESEARCH-GRP.github.io/score/**

## Requirements

- Node.js **22+**
- Registry sources in `../publications/papers/` (`projects.csv`, `architecture_index.csv`, digests, source notes, `CHANGELOG.md`) — from the private [`score_publications`](https://github.com/SJTU-YONGFU-RESEARCH-GRP/score_publications) submodule (`git submodule update --init publications`).

## Local development

```bash
cd site
npm install
npm run sync    # merges CSV → src/data/registry.json (also runs before dev/build)
npm run dev     # http://localhost:4321/score/
npm run build   # output in dist/
npm run preview
```

`npm run sync` **fails fast** if any `projects.csv` row lacks an `architecture_index.csv` join or points at a missing digest/source-note file.

## One-time GitHub Pages setup

1. Repo **Settings → Pages → Build and deployment → Source**: **GitHub Actions**
2. Merge/push to `main` (or run **Actions → Deploy GitHub Pages → Run workflow**)
3. Site URL: `https://SJTU-YONGFU-RESEARCH-GRP.github.io/score/`

The workflow is [`.github/workflows/pages.yml`](../.github/workflows/pages.yml). It rebuilds when `site/**` or `publications/**` changes.

**Private submodule:** `publications/` comes from the private `score_publications` repo. For Pages CI to check it out, enable **Settings → Actions → General → Workflow permissions → Read access to private repositories** for the org (or add a PAT with repo scope as `SCORE_PUBLICATIONS_TOKEN` and pass it to `actions/checkout`).

## Content model

| Route | Source |
|-------|--------|
| `/architectures/` | `registry.json` from CSV join |
| `/architectures/<slug>/` | registry fields + digest TL;DR or source-note Markdown |
| `/updates/` | `publications/papers/CHANGELOG.md` |
| `/contribute/`, `/score/`, `/about/` | static pages pointing at repo docs |

Do not duplicate survey prose in the site; keep digests and registry as the source of truth.
