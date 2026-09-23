[README.md](https://github.com/user-attachments/files/32578032/README.md)
# Project 1: Shopping Cart Calculator

A command-line C program that calculates the total cost of a purchase based on user input.

## What it does
- Prompts the user for an item name, price, and quantity
- Calculates the total cost (`price * quantity`)
- Prints a formatted summary with a currency symbol and two decimal places

## Example
```
What item would you like to purchase?: apples
What is the price of the item/items?: 2.50
How many of the item/items would you like to purchase?: 3

You have brought 3 apples
The total cost of 3 apples is: $7.50
```

## How to build/run
```bash
gcc shopping_cart.c -o shopping_cart
./shopping_cart
```

## Concepts practiced
- Mixed data types in one program (`char[]`, `float`, `int`)
- String input with `fgets` vs numeric input with `scanf`
- Stripping the trailing newline `fgets` leaves in the buffer (`strlen` + manual null-termination)
- Formatted output with `printf` (`%.2f`, `%c`, `%s`, `%d`)

## What I learned
`fgets` reads the newline character into the buffer along with the input, which `scanf("%s", ...)` doesn't do — so string input needed an extra cleanup step (`item[strlen(item) - 1] = '\0';`) before it could be used cleanly in output. This is one of the first real examples of C making you manage details that higher-level languages (Python, JS) handle automatically.
