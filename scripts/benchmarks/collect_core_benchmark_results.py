#!/usr/bin/env python3
"""Collect score.benchmark_results.v1 JSON files into benchmarks/core/aggregated_results.json."""

from __future__ import annotations

import json
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DATASETS = ROOT / "datasets"
OUT = ROOT / "benchmarks" / "core" / "aggregated_results.json"
FIGURE_DATA = ROOT / "publications" / "writings" / "csur" / "figures" / "core_benchmark_data.json"


def collect() -> list[dict]:
    rows: list[dict] = []
    if not DATASETS.is_dir():
        return rows
    for path in sorted(DATASETS.glob("*/**/benchmarks/*.json")):
        try:
            doc = json.loads(path.read_text())
        except json.JSONDecodeError:
            continue
        if doc.get("schema") != "score.benchmark_results.v1":
            continue
        doc["_path"] = str(path.relative_to(ROOT))
        rows.append(doc)
    return rows


def merge_into_figure_data(rows: list[dict]) -> None:
    if not FIGURE_DATA.is_file():
        return
    data = json.loads(FIGURE_DATA.read_text())
    measured: list[dict] = []
    for r in rows:
        if r.get("workload") != "coremark":
            continue
        m = r.get("metrics", {})
        if "coremark_per_mhz" not in m:
            continue
        label = f"{r['core']} {r.get('config', '')} (SCORE)".strip()
        measured.append(
            {
                "name": label,
                "area_kge": m.get("area_kge"),
                "coremark_per_mhz": m["coremark_per_mhz"],
                "evidence_class": "score_measured",
                "upstream_commit": r.get("upstream_commit"),
                "path": r.get("_path"),
            }
        )
    if measured:
        data["score_measured_mcu"] = measured
        FIGURE_DATA.write_text(json.dumps(data, indent=2) + "\n")


def main() -> None:
    rows = collect()
    payload = {
        "schema": "score.benchmark_aggregated.v1",
        "generated_utc": datetime.now(timezone.utc).replace(microsecond=0).isoformat(),
        "count": len(rows),
        "results": rows,
    }
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(json.dumps(payload, indent=2) + "\n")
    merge_into_figure_data(rows)
    print(f"Wrote {len(rows)} result(s) → {OUT}")


if __name__ == "__main__":
    main()
