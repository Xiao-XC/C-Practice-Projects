# C Projects

A collection of C projects I'm building while learning — starting with Bro Code's *C Programming Full Course for Free* and expanding into independent projects as I go.

## Projects

| Project | Description | Concepts |
|---------|--------------|----------|
| [Shopping-Cart-Program](./Shopping-Cart-Program) | Calculates the total cost of a purchase from item name, price, and quantity input | strings, `fgets`, `scanf`, float math, formatted output |
| [Mad-Libs-Game](./Mad-Libs-Game) | Takes adjectives, a noun, and a verb from the user and inserts them into a story template | strings, `fgets`, `strlen`, repeated input patterns |
| [Circle-Calculator-Program](./Circle-Calculator-Program) | Calculates a sphere's area, surface area, and volume from a given radius | `double`, `const`, `math.h`, `pow()` |
| [Compound-Interest-Calculator](./Compound-Interest-Calculator) | Calculates the future value of an investment using the compound interest formula | multi-variable math formulas, `pow()`, escaping `%` in `printf` |
| [Weight-Converter-Program](./Weight-Converter-Program) | Converts weight between kilograms and pounds based on a menu choice | `if`/`else if`/`else` branching, conditional logic |
| [Temperature-Converter](./Temperature-Converter) | Converts temperature between Celsius and Fahrenheit based on a menu choice | `char` input, `if`/`else if`/`else` branching |
| [Basic-Calculator-Program](./Basic-Calculator-Program) | Performs addition, subtraction, multiplication, and division based on user input | `switch` statements, division-by-zero handling |
| [Number-Guessing-Game](./Number-Guessing-Game) | Generates a random number and lets the user guess it with high/low feedback and a tries counter | `rand()`, `srand()`, `do-while` loops |
| [Rock-Paper-Scissors](./Rock-Paper-Scissors) | Plays Rock Paper Scissors against the computer, with logic split across multiple functions | function prototypes, return values, `switch` statements |
| [Banking-Program](./Banking-Program) | Simulates a simple ATM — check balance, deposit, and withdraw, with input validation | functions with shared state, input validation, platform-specific code (`windows.h`) |
| [Quiz-Game](./Quiz-Game) | A multiple-choice quiz with score tracking, looping through parallel arrays of questions and answers | 2D arrays, parallel arrays, `for` loops, `toupper()` |
| [Time-Utility-Program](./Time-Utility-Program) | Capstone project: digital clock, world clock, alarm, and countdown timer combined in one menu-driven app | `typedef struct`, arrays of structs, non-blocking input (`_kbhit`/`_getch`), elapsed-time math |

**Final project in Bro Code's *C Programming Full Course for Free*, and the project I'm most proud of in this repo.** More projects coming as I continue building beyond the course — pointers, file I/O, dynamic memory, and data structures.

## About

Junior year student learning C to strengthen low-level programming fundamentals (memory, pointers, manual data handling). Each project folder has its own README with more detail on what it does and what I learned building it.
