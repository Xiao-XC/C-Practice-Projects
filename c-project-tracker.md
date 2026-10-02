# C Project Tracker
**Goal:** Build a resume-ready project portfolio in C (Junior year)
**Status:** Following Bro Code's "C Programming Full Course for Free"

---

## How to use this
- Move projects between sections as you go.
- For each *completed* project, fill in the "Resume bullet" — write it like an achievement, not a task (what you built, what concept it exercised, what challenge you solved).
- Every project should end up on GitHub with a README (what it does, how to build/run it, what you learned).

---

## 🧱 Skill Roadmap (in order)
1. Syntax, variables, I/O (`printf`/`scanf`/`fgets`)
2. Control flow (if/else, loops, switch)
3. Functions & scope
4. Arrays & strings
5. Pointers
6. Structs
7. File I/O
8. Dynamic memory allocation (`malloc`/`free`)
9. (Stretch) Linked lists / basic data structures
10. (Stretch) A small multi-file project with a Makefile

---

## 📋 Planned Projects
_(sketch out bigger project ideas here as concepts stack up — these should combine multiple skills, not just be course demos)_

---

## 🚧 In Progress
_(move projects here when you start them)_

---

## ✅ Completed

**Project name:** Shopping Cart Calculator
**Date:** Sept 2026
**What it does:** Takes an item name, price, and quantity from the user and calculates/prints the total cost, formatted with a currency symbol and two decimal places.
**Tools/concepts used:** Core C (`char[]`, `float`, `int`), `fgets` for string input, `scanf` for numeric input, `strlen`, formatted output (`%.2f`, `%c`, `%s`)
**What I learned:** `fgets` includes the trailing newline in the buffer, so it has to be manually stripped with `item[strlen(item)-1] = '\0'` — a classic C gotcha that string input functions in higher-level languages hide. Also practiced mixing input types (string + float + int) in one program and formatting output cleanly.
**Resume bullet (final):** "Built a C command-line program to calculate purchase totals from user input, handling mixed data types (strings, floats, integers) and manual string buffer cleanup."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Shopping-Cart-Program

---

**Project name:** Mad Libs Game
**Date:** Sept 2026
**What it does:** Prompts the user for 3 adjectives, a noun, and a verb, then plugs them into a fixed story template about a trip to the zoo.
**Tools/concepts used:** Core C (`char[]`), `fgets`, `strlen`, repeated input/cleanup pattern across 5 variables, multi-line `printf` output
**What I learned:** Reinforced the `fgets` + newline-strip pattern from Project 1 until it stopped feeling like something to look up. Also noticed a variable declaration order issue (`noun` declared before the adjectives it comes after in input order) — a readability lesson, not a bug.
**Resume bullet (final):** "Built a C command-line Mad Libs game that collects and formats multiple user string inputs into a dynamic story output."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Mad-Libs-Game

---

**Project name:** Sphere Calculator
**Date:** Sept 2026
**What it does:** Takes a radius as input and calculates a sphere's area, surface area, and volume.
**Tools/concepts used:** `double` for precision, `const` for a fixed value, `math.h`'s `pow()` function, multiple formatted `%.2lf` outputs
**What I learned:** Learned that `math.h` functions like `pow()` require linking the math library at compile time with `-lm`, or the compiler throws an "undefined reference" error on some systems. Also learned `math.h` provides a built-in `M_PI` constant more precise than manually defining `PI`.
**Resume bullet (final):** "Built a C program to calculate sphere geometry (area, surface area, volume) from user input, using the math library and precision floating-point formatting."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Circle-Calculator-Program

---

**Project name:** Compound Interest Calculator
**Date:** Sept 2026
**What it does:** Calculates the future value of an investment given a principal, interest rate, number of years, and compounding frequency, using the compound interest formula.
**Tools/concepts used:** Mixing `double`/`int` inputs, converting a percentage to a decimal, `pow()` for a multi-variable formula, escaping a literal `%` in a `printf` format string (`%%`)
**What I learned:** Learned that a lone `%` inside a `printf` format string is invalid since `%` signals a format specifier — it needs to be escaped as `%%` to print a literal percent sign. Debugged and fixed this myself after it was flagged.
**Resume bullet (final):** "Built a C command-line compound interest calculator implementing a multi-variable financial formula, debugging a printf format-string error along the way."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Compound-Interest-Calculator

---

**Project name:** Weight Conversion Calculator
**Date:** Sept 2026
**What it does:** Presents a menu to convert weight between kilograms and pounds based on user choice, with error handling for invalid menu selections.
**Tools/concepts used:** `if` / `else if` / `else` branching, conditional logic, basic unit conversion math
**What I learned:** First project using real branching logic instead of a straight-line sequence of inputs and outputs — structuring a menu-driven program where the user's choice determines which formula runs. Foundation for more complex control flow (loops, switch statements) coming up next.
**Resume bullet (final):** "Built a menu-driven C program converting between kilograms and pounds, using conditional branching and input validation."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Weight-Converter-Program

---

**Project name:** Temperature Conversion Calculator
**Date:** Sept 2026
**What it does:** Presents a menu to convert temperature between Celsius and Fahrenheit based on user choice, with error handling for invalid menu selections.
**Tools/concepts used:** `char` variables, `scanf("%c", ...)`, `if` / `else if` / `else` branching, temperature conversion formulas
**What I learned:** Similar branching structure to the Weight Conversion project, but using a `char` instead of an `int` for the menu choice. Noticed the comparisons (`choice == 'C'`) are case-sensitive — a lowercase input currently falls into the invalid-choice branch, something to revisit with `toupper()` later.
**Resume bullet (final):** "Built a menu-driven C program converting between Celsius and Fahrenheit, using character input and conditional branching."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Temperature-Converter

---

**Project name:** Basic Calculator
**Date:** Sept 2026
**What it does:** Performs addition, subtraction, multiplication, and division on two user-entered numbers based on an operator symbol, with division-by-zero handling.
**Tools/concepts used:** `switch` statements with `case`/`default`/`break`, `char` operator comparison, `scanf(" %c", ...)` leading-space trick to skip whitespace between mixed input types
**What I learned:** First time using `switch` instead of chained `if`/`else if` — cleaner for a fixed set of known options. Learned to add a leading space before `%c` in `scanf` to skip a leftover newline in the input buffer. Also noticed a minor UX issue: dividing by zero still prints `Result: 0.0000` after the error message since `result` was never assigned — worth an early exit or flag in a future revision.
**Resume bullet (final):** "Built a C command-line calculator using switch-case logic for four arithmetic operations, including division-by-zero handling."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Basic-Calculator-Program

---

**Project name:** Number Guessing Game
**Date:** Sept 2026
**What it does:** Generates a random number between 1 and 100 and lets the user guess it repeatedly, giving "too high"/"too low"/"correct" feedback and tracking the number of tries.
**Tools/concepts used:** `rand()` and `srand(time(NULL))` for randomized output, `do-while` loops, loop control based on a comparison, tracking state across iterations (`tries++`)
**What I learned:** First bug I found and fixed myself without it being flagged first — my original random-number formula could produce values outside the intended 1–100 range. Fixed it, then traced through the math afterward and realized the fix technically only worked because `min` was `1` (the `-min`/`+min` terms canceled out); a fully generalizable version would be `min + rand() % (max - min + 1)`. Good reminder to test edge cases, not just the happy path.
**Resume bullet (final):** "Built a C number-guessing game with randomized number generation, loop-based game logic, and self-debugged a range-calculation bug."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Number-Guessing-Game

---

**Project name:** Rock Paper Scissors
**Date:** Sept 2026
**What it does:** Lets the user play Rock Paper Scissors against the computer — user picks an option (with input validation), computer picks randomly, and a winner is determined.
**Tools/concepts used:** Function prototypes/declarations, splitting logic across multiple functions (`getUserChoice()`, `getComputerChoice()`, `checkWinner()`), passing parameters between functions, return values, `do-while` input validation, `switch` statements, compound logical conditions (`&&`/`||`)
**What I learned:** First project breaking logic into separate functions instead of writing everything in `main()` — each function handles one specific job, which made the code easier to read and reason about compared to earlier single-function projects. Also practiced returning a value from a function and using it directly, and combining multiple conditions to check all three winning combinations.
**Resume bullet (final):** "Built a C command-line Rock Paper Scissors game using modular function design, return values, and compound conditional logic to determine the winner."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Rock-Paper-Scissors

---

**Project name:** Unreliable Banking (ATM Simulator)
**Date:** Sept 2026
**What it does:** Simulates a simple ATM — check balance, deposit, and withdraw — with input validation and personality in the error messages (e.g. rejecting negative deposits, blocking overdrafts).
**Tools/concepts used:** Multiple functions with return values updating shared state (`balance`) back in `main()`, function-level input validation, `switch` inside a `do-while` menu loop, `Sleep()` for timed pauses (Windows-specific via `windows.h`)
**What I learned:** Continued practicing function decomposition from Rock Paper Scissors, this time with functions that both take a parameter and return a value used to update that same variable back in `main()` (`balance -= withdraw(balance)`). Also learned `windows.h`/`Sleep()` are platform-specific and won't compile as-is on Mac/Linux — a good early lesson in portability that hadn't come up in earlier projects using only `stdio.h` and `math.h`.
**Resume bullet (final):** "Built a C command-line ATM simulator with modular deposit/withdraw functions, shared-state balance tracking, and input validation against invalid or excessive transactions."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Banking-Program

---

**Project name:** Quiz Game
**Date:** Sept 2026
**What it does:** A multiple-choice quiz about the solar system, looping through a set of questions and tracking the user's score, with case-insensitive answer checking.
**Tools/concepts used:** 2D arrays of strings (`char questions[][100]`), parallel arrays indexed together in a loop, `for` loops, `toupper()` for input normalization, `sizeof(arr)/sizeof(arr[0])` for array length
**What I learned:** First project using 2D string arrays and looping through parallel arrays instead of writing separate, repeated code for each question — a step toward scalable, DRY code. Applied `toupper()` to solve a case-sensitivity issue that had come up in an earlier project (Temperature Converter), where lowercase input incorrectly fell into the "invalid" branch.
**Resume bullet (final):** "Built a C command-line quiz game using 2D arrays and parallel array indexing, with case-insensitive input handling and automatic score tracking."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Quiz-Game

---

**Project name:** Digital Clock
**Date:** Sept 2026
**What it does:** Displays the current local time, refreshing every second, with a non-blocking option to power off back to the menu. Originally Bro Code's final course project, later expanded into one feature of the larger Time Utility Program.
**Tools/concepts used:** `time_t`/`struct tm`, `time()`/`localtime()`, `Sleep()`, `system("cls")` for a clean redraw, non-blocking input with `_kbhit()`/`_getch()` from `conio.h`
**What I learned:** Went through real iteration to get the refresh loop right. The first version used `scanf` inside the loop to check for power-off input, which blocked and paused the entire program — so the clock couldn't refresh freely, it would just freeze waiting for input each cycle. Switching to `_kbhit()`/`_getch()` fixed this, since it checks for a keypress without ever pausing execution. Also hit and fixed a real crash: passing `(*option)` into `scanf` instead of `option` — since `option` was already a pointer, dereferencing it passed a value where `scanf` needed an address, crashing the program. This debugging process became the foundation for the Digital Clock feature inside the Time Utility Program capstone.
**Resume bullet (final):** "Built a live-updating C digital clock using non-blocking keyboard input, debugging a blocking-I/O design flaw and a pointer/value mix-up along the way."
**GitHub link:** _(add once pushed)_

---

**Project name:** Time Utility Program (Capstone)
**Date:** Sept 2026
**What it does:** A multi-feature menu-driven program combining a digital clock, a world clock (multiple cities via an array of structs), an alarm (12-hour time with AM/PM), and a countdown timer with pause/resume — all running continuously without blocking on input. Started as Bro Code's final course project (a basic digital clock) and expanded well beyond the original scope as a true capstone.
**Tools/concepts used:** `typedef struct` (`Cities`, `timeAlarm`), arrays of structs, `time_t`/`struct tm`, `localtime()` vs `gmtime()`, non-blocking input (`_kbhit()`/`_getch()` from `conio.h`), ternary operators, 12-hour/24-hour time conversion, elapsed-time calculation via `time(NULL)` deltas, input buffer flushing
**What I learned:** Debugged a real pointer/value mix-up (passing a dereferenced pointer into `scanf` instead of the pointer itself), a stale-state bug in the main menu loop, UTC-vs-local time confusion between the World Clock and Alarm features, 12-hour conversion edge cases at noon/midnight, and several "logic was right but the UI refresh order hid the result" bugs. Needed outside help designing the Timer's pause/resume elapsed-time logic specifically, since I didn't have a mental model for tracking elapsed time across pauses yet — went back afterward and traced through it until I could explain why `remaining` only updates at the moment of pausing while `startTime` resets fresh on each resume.
**Resume bullet (final):** "Built a multi-feature C console application (digital clock, world clock, alarm, countdown timer) using structs, non-blocking input handling, and real-time elapsed-time calculations; independently debugged pointer, timezone, and UI-refresh-order bugs."
**GitHub link:** https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Time-Utility-Program

---

**Project name:**
**Date:**
**What it does:**
**Tools/concepts used:**
**What I learned:**
**Resume bullet (final):**
**GitHub link:**

---

## 💡 Idea Parking Lot
_(random project ideas you think of — dump them here, sort later)_
