# Project 4: Compound Interest Calculator

A command-line C program that calculates the future value of an investment using the compound interest formula.

## What it does
- Prompts the user for:
  - Principal amount (P)
  - Annual interest rate as a percentage (r)
  - Number of years (t)
  - Number of times interest is compounded per year (n)
- Calculates the total using the compound interest formula: `A = P(1 + r/n)^(nt)`
- Prints the final amount, formatted to 2 decimal places

## Example
```
Compound Interest Calculator
Enter the principal (P): 1000
Enter the interest rate % (r): 5
Enter the number of years (t): 10
Enter # of times compunded per year (n): 12
After 10 year/s, the total will be $1647.01
```

<img width="668" height="182" alt="Screenshot 2026-09-24 172153" src="https://github.com/user-attachments/assets/1148b025-4278-427e-ae42-90bf047f1103" />


## How to build/run
Requires linking the math library for `pow()`:
```bash
gcc compound_interest.c -o compound_interest -lm
./compound_interest
```

## Concepts practiced
- Mixing `double` and `int` inputs in one program
- Converting a user-entered percentage into a decimal (`rate /= 100`)
- Implementing a multi-variable math formula with `pow()`
- Escaping a literal `%` character in a `printf` format string (`%%`)

## What I learned
Learned that `%` has special meaning inside a `printf` format string — it signals the start of a format specifier, so a lone `%` (like in "interest rate % (r)") is invalid and needs to be escaped as `%%` to print an actual percent sign. This is a common first-time `printf` gotcha, similar to how `fgets` needed manual newline handling in earlier projects — small "leaky abstraction" details in C that don't show up in higher-level languages.
