# Project 8: Number Guessing Game

A command-line C program that generates a random number and lets the user guess it, with feedback and a tries counter.

## What it does
- Generates a random number between 1 and 100 using `rand()` and `srand(time(NULL))`
- Repeatedly prompts the user to guess, using a `do-while` loop
- Gives "TOO HIGH" / "TOO LOW" / "CORRECT" feedback after each guess
- Tracks and prints the number of tries once the correct number is guessed

## Example
```
*** NUMBER GUESSING GAME ***
Guess a number between 1 - 100: 50
TOO HIGH!
Guess a number between 1 - 100: 25
TOO LOW!
Guess a number between 1 - 100: 37
CORRECT!
The answer is 37
It took you 3 tries
```

## How to build/run
```bash
gcc number_guessing_game.c -o number_guessing_game
./number_guessing_game
```

## Concepts practiced
- `rand()` and `srand(time(NULL))` for randomized output that changes each run
- `do-while` loops (guaranteed to run at least once, unlike `while`)
- Loop control based on a comparison (`while (guess != answer)`)
- Tracking state across loop iterations (`tries++`)

## What I learned
First bug I found and fixed myself without it being flagged first. My original formula for generating the random number, `(rand() % max - min - 1) - min`, could actually produce negative numbers outside the stated 1–100 range. I fixed it to `(rand() % max - min + 1) + min`, which works correctly — though tracing through the order of operations afterward showed the `- min` and `+ min` actually cancel out entirely, so the formula only works because `min` is `1`. A more generalizable version for any range would be `min + rand() % (max - min + 1)`. Good reminder to test edge cases (like changing `min`) rather than just confirming the happy path works.
