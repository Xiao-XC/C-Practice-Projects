# Project 5: Weight Conversion Calculator

A command-line C program that converts weight between kilograms and pounds based on user choice.

## What it does
- Presents a menu: convert kilograms → pounds, or pounds → kilograms
- Takes the user's choice and the weight value
- Prints the converted result, formatted to 2 decimal places
- Handles invalid menu choices with an error message

## Example
```
Weight Conversion Calculator
1. Kilograms to Pounds
2. Pounds to Kilograms
Enter your choice (1 or 2): 1
Enter the weight in kilograms: 75
75.00 kilograms is equal to 165.35 pounds
```

## How to build/run
```bash
gcc weight_converter.c -o weight_converter
./weight_converter
```

## Concepts practiced
- `if` / `else if` / `else` branching based on user input
- Conditional logic to control which block of code runs
- Basic unit conversion math
- Handling invalid input with a fallback `else` case

## What I learned
First project using real branching logic instead of a single straight-line sequence of inputs and outputs. Learned to structure a menu-driven program where the user's choice determines which formula runs — this is the foundation for more complex control flow (loops, switch statements) coming up next in the course.
