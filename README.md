[README.md](https://github.com/user-attachments/files/34998658/README.md)
# C Projects

A collection of C projects I'm building while learning — starting with Bro Code's *C Programming Full Course for Free*, adding my ECE 340 data-structures coursework, and expanding into independent projects as I go.

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
| [Digital-Clock](./Digital-Clock) | A live-updating clock with non-blocking exit, originally Bro Code's final course project | `time_t`/`struct tm`, `_kbhit()`/`_getch()`, non-blocking input |
| [Time-Utility-Program](./Time-Utility-Program) | Capstone project: digital clock, world clock, alarm, and countdown timer combined in one menu-driven app | `typedef struct`, arrays of structs, non-blocking input (`_kbhit`/`_getch`), elapsed-time math |
| [Array-Divisibility-Checker](./Array-Divisibility-Checker) | Reads up to 50 integers into an array and labels each as divisible by 3, 4, both, or none (ECE 340 Project #0) | fixed-size arrays, input validation, modulo, compound conditions |
| [Linked-List-ADT](./Linked-List-ADT) | Singly linked list library with insert/remove by value or index, reverse, and palindrome check (ECE 340 Project #1) | `typedef struct`, `malloc`/`free`, head/tail pointers, list traversal |
| [Array-Stack-ADT](./Array-Stack-ADT) | Stack backed by a dynamic array that doubles when full (ECE 340 Project #2) | dynamic arrays, resizing, LIFO, pointer parameters |
| [Priority-Queue-ADT](./Priority-Queue-ADT) | Max-heap priority queue in a dynamic array with sift-up/sift-down and height (ECE 340 Project #3) | binary heaps, array index math, O(log n) operations |
| [Hash-Table-ADT](./Hash-Table-ADT) | Menu-driven hash table with separate chaining and load-factor display (ECE 340 Project #4) | hashing, collision handling, nested structs, memory cleanup |

**Final project in Bro Code's *C Programming Full Course for Free*, and the project I'm most proud of in this repo.** The last five rows are ECE 340 coursework (linked list, stack, priority queue, hash table). More projects coming as I continue building beyond the course — file I/O and a multi-file project with a Makefile.

## About

Junior year student learning C to strengthen low-level programming fundamentals (memory, pointers, manual data handling). Each project folder has its own README with more detail on what it does and what I learned building it.
