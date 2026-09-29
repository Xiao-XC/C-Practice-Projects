# Project 11: Quiz Game

A command-line C multiple-choice quiz about the solar system, looping through a set of questions and tracking the user's score.

## What it does
- Presents a series of multiple-choice questions with options A–D
- Takes the user's letter choice and normalizes case (so lowercase or uppercase both work)
- Compares each answer against an answer key and tracks a running score
- Prints the final score out of the total number of questions

## Example
```
*** QUIZ GAME ***

What is the largest planet in the solar system?

A. Jupiter
B. Saturn
C. Uranus
D. Neptune
Enter your choice: a
CORRECT!
...
Your score is 3/4
```

## How to build/run
```bash
gcc quiz_game.c -o quiz_game
./quiz_game
```

## Concepts practiced
- 2D arrays of strings (`char questions[][100]`, `char options[][100]`)
- Parallel arrays indexed together in a loop (`questions[i]`, `options[i]`, `answerKey[i]`)
- `for` loops to avoid repeating the same input/check logic per question
- `toupper()` to normalize character input before comparison
- Calculating array length with `sizeof(arr)/sizeof(arr[0])` instead of hardcoding a count

## What I learned
First project using 2D string arrays and looping through parallel arrays instead of writing separate, repeated code for each question — a big step toward writing scalable, DRY (Don't Repeat Yourself) code. Also applied `toupper()` to solve the case-sensitivity issue that came up back in the Temperature Converter project, where a lowercase input would incorrectly fall into the "invalid" branch. Using `sizeof(questions)/sizeof(questions[0])` to get the question count also means the quiz can grow just by adding array entries, without needing to update a separate count variable by hand.
