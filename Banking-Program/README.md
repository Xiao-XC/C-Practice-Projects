# Project 10: Unreliable Banking (ATM Simulator)

A command-line C program simulating a simple ATM — check balance, deposit, and withdraw — with input validation and a bit of personality in the error messages.

## What it does
- Presents a menu: Check Balance, Deposit Money, Withdraw Money, Exit
- Deposits and withdrawals are handled by separate functions that validate input and return the amount to adjust the balance by
- Rejects negative deposit/withdrawal amounts and withdrawals that exceed the current balance
- Loops until the user chooses to exit

## Example
```
*** WELCOME TO UNRELIABLE BANKING ***
Select an option:

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2

Enter amount to deposit: $100
Successfully deposited $100.00

Select an option:
...
Enter your choice: 1

Your current balance is: $100.00
```

## How to build/run
> **Note:** This program uses `windows.h` and `Sleep()`, which are Windows-only. On Mac/Linux, swap `Sleep(500)` (milliseconds) for `sleep(1)` (seconds, from `unistd.h`), or remove those calls, to compile.

```bash
gcc unreliable_banking.c -o unreliable_banking
./unreliable_banking
```

## Concepts practiced
- Multiple functions with return values, each updating shared state (`balance`) back in `main()`
- Function-level input validation (rejecting negative amounts, rejecting overdrafts)
- `switch` inside a `do-while` menu loop
- `Sleep()` for a timed pause between messages (Windows-specific)

## What I learned
Continued practicing function decomposition from the Rock Paper Scissors project, this time with functions that both take a parameter (`withdraw(balance)`) and return a value used to update that same variable back in `main()` (`balance -= withdraw(balance)`). Also learned `windows.h`/`Sleep()` are platform-specific and won't compile as-is on Mac/Linux — a good early lesson in portability that didn't come up in earlier projects using only `stdio.h` and `math.h`.
