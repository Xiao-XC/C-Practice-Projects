# Project 2: Mad Libs Game

A command-line C program that prompts the user for words (adjectives, a noun, a verb) and inserts them into a short story template.

## What it does
- Asks the user for 3 adjectives, 1 noun, and 1 verb
- Plugs the words into a fixed story about a trip to the zoo
- Prints the completed, user-generated story

## Example
```
Enter an adjective (description): sunny
Enter a noun (animal or person): giraffe
Enter an adjective (description): wobbly
Enter a verb (-ing): dancing
Enter an adjective (description): thrilled

Today I went to the sunny Zoo.
In an exhibit, I saw a giraffe.
giraffe was wobbly and dancing!
I was thrilled!
```
<img width="502" height="124" alt="Screenshot 2026-09-23 185246" src="https://github.com/user-attachments/assets/e535450c-470f-40fc-abef-552f142b20c6" />


## How to build/run
```bash
gcc mad_libs.c -o mad_libs
./mad_libs
```

## Concepts practiced
- Multiple string variables (`char[]`) filled from user input
- `fgets` for reading full lines of text
- Stripping the trailing newline `fgets` leaves behind (`strlen` + manual null-termination), repeated across 5 separate inputs
- String interpolation across several `printf` calls to build a multi-line output

## What I learned
This project was mostly about repetition — reinforcing the `fgets` + newline-strip pattern from Project 1 until it stopped feeling like something I had to look up. It also got me thinking about variable declaration order: I declared `noun` before the adjectives even though it's filled in second, which still works but reads a bit awkwardly — worth declaring variables in the order they're actually used going forward.
