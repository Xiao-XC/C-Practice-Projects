# Project 7: Basic Calculator

A command-line C program that performs basic arithmetic (addition, subtraction, multiplication, division) based on user input.

## What it does
- Prompts the user for two numbers and an operator (`+`, `-`, `*`, `/`)
- Uses a `switch` statement to perform the correct operation
- Guards against division by zero
- Prints the result formatted to 4 decimal places

## Example
```
Enter the first number: 10
Enter the operator (+ - * /): /
Enter the second number: 4
Result: 2.5000
```

## How to build/run
```bash
gcc calculator.c -o calculator
./calculator
```

## Concepts practiced
- `switch` statements with `case`/`default`/`break`
- `char` operator comparison
- Division-by-zero guard with a nested `if`/`else`
- Leading-space trick in `scanf(" %c", ...)` to skip whitespace/newlines between mixed input types

## What I learned
First time using `switch` instead of chained `if`/`else if` — cleaner for handling a fixed set of known options like an operator symbol. Also learned to add a leading space before `%c` in `scanf` to skip any leftover newline character sitting in the input buffer from the previous read, which prevents `operator` from accidentally being read as `'\n'`. One thing to revisit: when dividing by zero, the program still prints `Result: 0.0000` after the error message since `result` was never assigned — worth adding an early exit or flag to skip that final print in that case.
