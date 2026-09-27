# Project 9: Rock Paper Scissors

A command-line C program that plays Rock Paper Scissors against the computer, using functions to separate game logic.

## What it does
- Prompts the user to choose Rock, Paper, or Scissors (with input validation)
- Randomly generates the computer's choice
- Prints both choices, then determines and prints the winner

## Example
```
*** ROCK PAPER SCISSORS ***
Choose an option
1. ROCK
2. PAPER
3. SCISSORS
Enter your choice: 1
You chose ROCK!
Computer chose SCISSORS!
you WIN!
```

## How to build/run
```bash
gcc rock_paper_scissors.c -o rock_paper_scissors
./rock_paper_scissors
```

## Concepts practiced
- Function prototypes/declarations and splitting logic across multiple functions
- Passing parameters between functions (`checkWinner(userChoice, computerChoice)`)
- Return values (`getUserChoice()` and `getComputerChoice()` both return `int`)
- Input validation with a `do-while` loop
- `switch` statements and compound logical conditions (`&&`, `||`)

## What I learned
First project breaking logic into separate functions instead of writing everything in `main()` — `getUserChoice()`, `getComputerChoice()`, and `checkWinner()` each handle one specific job, which made the code easier to read and reason about compared to earlier, single-function projects. Also practiced returning a value from a function and using it directly in a variable assignment, and combining multiple conditions with `&&`/`||` to check all three winning combinations in `checkWinner()`.
