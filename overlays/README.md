# SCORE overlays

Upstream checkouts live under `tools/<name>/` (git submodules / clones). **Do not commit SCORE-local edits inside those trees** — that dirties the submodule and breaks parent `git add`.

SCORE-owned adaptations (URL rewrites, private-dep removals, host config) live here:

```text
overlays/<arch>/
  README.md
  patches/          # git patches applied onto tools/<arch> at install time
  files/            # optional drop-in files (copied/rsync'd by install scripts)
```

## Rules

1. **Source of truth for SCORE tweaks** = `overlays/` (committed & pushed to *this* GitHub repo).
2. **`tools/` stays upstream** — install scripts apply overlays onto a clean checkout.
3. Dirty submodule worktrees are not stageable in the parent; fix by resetting `tools/<arch>` and re-applying overlays.
4. New SCORE config belongs under `overlays/<arch>/`, not under `tools/<arch>/`.

## Apply

Each arch’s install / remotes helper applies its overlay (see `scripts/hero_submodule_remotes.sh` for HERO).
