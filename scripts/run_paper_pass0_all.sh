#!/usr/bin/env bash
# Run research-analyze-paper Pass 0 on all PDFs in papers/references/.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SKILL="${SKILL_ROOT:-$HOME/.cursor/skills/research-analyze-paper}"
PY="${PAPER_ANALYZE_PYTHON:-$ROOT/.venv-research-analyze-paper/bin/python}"
PAPERS="$ROOT/papers"
REF="$PAPERS/references"
LOG="$PAPERS/pass0.log"

: > "$LOG"
for pdf in "$REF"/*.pdf; do
  echo "=== $(basename "$pdf") ===" | tee -a "$LOG"
  bash "$SKILL/scripts/scaffold_paper.sh" "$pdf" "$PAPERS" >> "$LOG" 2>&1
  slug=$(basename "$pdf" .pdf | tr '[:upper:]' '[:lower:]' | sed -E 's/[^a-z0-9]+/-/g; s/^-+|-+$//g')
  dir="$PAPERS/$slug"
  "$PY" "$SKILL/scripts/capture_figures.py" "$dir/paper.pdf" --out-dir "$dir/figures" --zoom 3 >> "$LOG" 2>&1
  "$PY" "$SKILL/scripts/capture_tables.py" "$dir/paper.pdf" --out-dir "$dir/tables" --height 280 >> "$LOG" 2>&1
  "$PY" "$SKILL/scripts/audit_pdf.py" "$dir/paper.pdf" --out "$dir" --render-pages >> "$LOG" 2>&1
  echo "done $slug" | tee -a "$LOG"
done
echo "PASS0_COMPLETE" | tee -a "$LOG"
