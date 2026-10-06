# Verification and Limitations

On 6 October 2026, the eight C++ implementation files were compiled together using GCC on Windows with `-std=c++17 -Wall -Wextra -pedantic`.

The documented demonstration scenario checks successful access, a security-level update to 3, the resulting upgrade counter, statistics display, and the current logout flow. It does not exercise the unsafe repeated-reactor path or claim that malformed input is handled correctly.

Compiler success and this limited runtime check do not establish secure authentication, complete statistics, or production readiness. The README records the source-observed defects separately from the proposed development work.

Original source bytes were preserved. Generated `.exe` files were removed from Git tracking and remain recoverable from existing history and local backups. No release tag was rewritten.
