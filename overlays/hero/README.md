# HERO overlay (SCORE)

Local adaptations for `tools/hero` that must not live as uncommitted edits inside the submodule.

| Patch | Purpose |
|-------|---------|
| `patches/0001-buildroot-use-github-https.patch` | Prefer GitHub HTTPS for buildroot (more reliable than `git://git.buildroot.net`) |
| `patches/0002-axi_riscv_atomics-drop-private-vip.patch` | Drop private ETH `vip` Bender dep (public axi_riscv_atomics uses `common_verification`) |

Applied by `scripts/hero_submodule_remotes.sh` (idempotent `git apply`).

Optional env overrides in that script (`HERO_BUILDROOT_URL`, `HERO_KEEP_AXI_RISCV_ATOMICS_VIP`, …) still win when set.

## Clean + re-apply

```bash
cd tools/hero
git restore --source=HEAD --staged --worktree -- .gitmodules hardware/deps/axi_riscv_atomics/Bender.yml
cd ../..
bash scripts/hero_submodule_remotes.sh
```
