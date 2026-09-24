# Project 6: Temperature Conversion Calculator

A command-line C program that converts temperature between Celsius and Fahrenheit based on user choice.

## What it does
- Presents a menu: convert Celsius → Fahrenheit, or Fahrenheit → Celsius
- Takes the user's choice (`C` or `F`) and the temperature value
- Prints the converted result, formatted to 2 decimal places
- Handles invalid menu choices with an error message

## Example
```
Temperature Conversion Program
C. Celsius to Fahrenheit
F. Fahrenheit to Celsius
Is the temp in Celsius (C) or Fahrenheit (F)?C
Enter the temperature in Celsius: 25
25.00 Celsius is equal to 77.00 Fahrenheit
```
<img width="675" height="179" alt="Screenshot 2026-09-24 190804" src="https://github.com/user-attachments/assets/a6961e71-89c5-479f-9dfe-1d16a3e229e6" />

## How to build/run
```bash
gcc temperature_converter.c -o temperature_converter
./temperature_converter
```

## Concepts practiced
- `char` variables and reading a single character with `scanf("%c", ...)`
- `if` / `else if` / `else` branching based on a character comparison
- Temperature conversion formulas (`F = C * 9/5 + 32` and `C = (F - 32) * 5/9`)

## What I learned
Similar branching structure to the Weight Conversion project, but using a `char` instead of an `int` for the menu choice. Also noticed the comparisons (`choice == 'C'`) are case-sensitive — a lowercase `c` or `f` currently falls into the invalid-choice branch. Worth revisiting once `toupper()` is covered, to make the program accept both cases.
