# C++ Security Terminal

A modular console simulation for learning C++ program structure, shared state, and menu-driven control flow.

The application connects a demonstration PIN gate, a main menu, security-level selection, reactor state, credit deductions, and statistics. It is an educational simulation; the embedded PIN and in-memory state do not provide real security.

## Architecture

| Responsibility | Implementation | Behaviour |
| --- | --- | --- |
| Entry point | [main.cpp](main.cpp) | Starts the access flow and dispatches to the main menu |
| Demonstration access gate | [SistemadiAccesso.cpp](SistemadiAccesso.cpp) | Compares input with an embedded numeric PIN |
| Navigation | [MenuPrincipale.cpp](MenuPrincipale.cpp) | Dispatches menu choices to the individual modules |
| Security level | [LivelloSicurezza.cpp](LivelloSicurezza.cpp) | Accepts levels 1–3 and updates a counter |
| Reactor state | [Reattore.cpp](Reattore.cpp) | Offers to turn off the initially active reactor |
| Credit deductions | [Crediti.cpp](Crediti.cpp) | Deducts service costs from the shared balance |
| Statistics | [Statistiche.cpp](Statistiche.cpp) | Displays the current counters |
| Shared state | [DatiCondivisi.cpp](DatiCondivisi.cpp) | Defines global state declared through headers |

## Build

From the repository root, with GCC available on `PATH`:

```powershell
New-Item -ItemType Directory -Force build | Out-Null
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp SistemadiAccesso.cpp MenuPrincipale.cpp LivelloSicurezza.cpp Reattore.cpp Crediti.cpp Statistiche.cpp DatiCondivisi.cpp -o build/security-terminal.exe
.\build\security-terminal.exe
```

On a POSIX shell, create the directory with `mkdir -p build`, use the same source list and `-o build/security-terminal`, then run `./build/security-terminal`. Only the Windows build was verified in this review.

## Example: adjust security and inspect statistics

Enter `5736`, `2`, `3`, `4`, `5`, `5736`, one value per prompt. The embedded demonstration PIN opens the menu; option 2 selects security settings; level 3 updates the state; option 4 shows statistics. In this version, option 5 prompts for the PIN again before the application returns.

This scenario was executed successfully on 6 October 2026. See [verification and limitations](docs/validation.md) for its boundaries.

## Current limitations

- The access loop permits four incorrect attempts because it uses `<= 3` with a zero-based counter.
- Failed logins and executed-command counters are not fully wired to the displayed statistics.
- Credit operations can make the balance negative and do not consistently perform the corresponding reactor or security action.
- Re-entering reactor control after shutdown can read an uninitialised local choice.
- Logout calls the access function again instead of ending the session immediately.
- Malformed input and end-of-input handling are incomplete; state is not persisted.

## Development direction

1. Define and verify login, logout, and reactor transitions.
2. Centralise input validation and handle end-of-input explicitly.
3. Enforce credit invariants and update statistics at the operation boundary.
4. Replace shared globals with an explicit application-state object.
5. Add focused behaviour tests before introducing persistence or additional features.

The historical `v0.1` tag remains available. This documentation pass preserves the C++ source and removes generated executables from the current tracked tree.

## Related projects

[C++ Learning Projects](https://github.com/randonguilherme15-beep/cpp-learning-projects) · [Guilherme Randon](https://github.com/randonguilherme15-beep) · [Maintenance record](docs/maintenance-record.md)
