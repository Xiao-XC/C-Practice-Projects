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
**GitHub link:** [Shopping Cart Program](https://github.com/Xiao-XC/C-Practice-Projects/tree/main/Shopping%20Cart%20Program)

---

**Project name:** Mad Libs Game
**Date:** Sept 2026
**What it does:** Prompts the user for 3 adjectives, a noun, and a verb, then plugs them into a fixed story template about a trip to the zoo.
**Tools/concepts used:** Core C (`char[]`), `fgets`, `strlen`, repeated input/cleanup pattern across 5 variables, multi-line `printf` output
**What I learned:** Reinforced the `fgets` + newline-strip pattern from Project 1 until it stopped feeling like something to look up. Also noticed a variable declaration order issue (`noun` declared before the adjectives it comes after in input order) — a readability lesson, not a bug.
**Resume bullet (final):** "Built a C command-line Mad Libs game that collects and formats multiple user string inputs into a dynamic story output."
**GitHub link:** _(add once pushed)_

---

**Project name:** Sphere Calculator
**Date:** Sept 2026
**What it does:** Takes a radius as input and calculates a sphere's area, surface area, and volume.
**Tools/concepts used:** `double` for precision, `const` for a fixed value, `math.h`'s `pow()` function, multiple formatted `%.2lf` outputs
**What I learned:** Learned that `math.h` functions like `pow()` require linking the math library at compile time with `-lm`, or the compiler throws an "undefined reference" error on some systems. Also learned `math.h` provides a built-in `M_PI` constant more precise than manually defining `PI`.
**Resume bullet (final):** "Built a C program to calculate sphere geometry (area, surface area, volume) from user input, using the math library and precision floating-point formatting."
**GitHub link:** _(add once pushed)_

---

**Project name:** Compound Interest Calculator
**Date:** Sept 2026
**What it does:** Calculates the future value of an investment given a principal, interest rate, number of years, and compounding frequency, using the compound interest formula.
**Tools/concepts used:** Mixing `double`/`int` inputs, converting a percentage to a decimal, `pow()` for a multi-variable formula, escaping a literal `%` in a `printf` format string (`%%`)
**What I learned:** Learned that a lone `%` inside a `printf` format string is invalid since `%` signals a format specifier — it needs to be escaped as `%%` to print a literal percent sign. Debugged and fixed this myself after it was flagged.
**Resume bullet (final):** "Built a C command-line compound interest calculator implementing a multi-variable financial formula, debugging a printf format-string error along the way."
**GitHub link:** _(add once pushed)_

---

**Project name:** Weight Conversion Calculator
**Date:** Sept 2026
**What it does:** Presents a menu to convert weight between kilograms and pounds based on user choice, with error handling for invalid menu selections.
**Tools/concepts used:** `if` / `else if` / `else` branching, conditional logic, basic unit conversion math
**What I learned:** First project using real branching logic instead of a straight-line sequence of inputs and outputs — structuring a menu-driven program where the user's choice determines which formula runs. Foundation for more complex control flow (loops, switch statements) coming up next.
**Resume bullet (final):** "Built a menu-driven C program converting between kilograms and pounds, using conditional branching and input validation."
**GitHub link:** _(add once pushed)_

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
