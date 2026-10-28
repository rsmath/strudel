# AGENTS.md

## Purpose
This repository is for building music with strudel.cc.

The agent should prioritize:
- simple, readable code
- reproducible outputs
- deterministic behavior where possible
- minimal dependencies
- fast iteration

---

## Rules

### Repository Boundaries
- NEVER read, modify, or reference files outside this repository.
- Do not access parent directories.
- Do not inspect user home directories.
- Do not rely on global machine state.

Only operate on files that exist inside the repository checkout.

---

### Internet Usage
- You MAY use the internet for:
  - documentation
  - API references
  - library usage examples
  - protocol specifications
  - official package docs

- DO NOT:
  - clone unrelated repositories
  - copy large external codebases
  - scrape datasets
  - download random binaries
  - generate code from external proprietary sources

Use the internet as reference material only.

---

## Coding Style
- Prefer the javascript style of strude.cc
- Keep functions small and composable.
- Add comments only when they clarify non-obvious behavior.

