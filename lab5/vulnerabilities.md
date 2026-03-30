# Vulnerabilities found with `bandit` and `cppcheck`

## Bandit

No issues identified.
Code doesn't have any hardcoded secrets.

## cppcheck

1. Multiple missing includes found. This is more of a path problem. The code compiles just fine.

2. 'setup()' function is never used. This is expected, since the setup() function is called by the esp32 during its initial bootup sequence.

3. C-style pointer casting -> In a real-world scenario it would be a medium severity vulnerability because there are no checks to ensure that the casting is done correctly.

4. Parameter can be declared as pointer to const -> This could also be an issue, although here it isn't. If we don't expect to modify a variable, it's good practice to mark it as const to ensure that we make it read-only. It could be rated as a medium-to-high severity, since it could make some vulnerabilities.