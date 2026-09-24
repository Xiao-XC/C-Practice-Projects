[README.md](https://github.com/user-attachments/files/32621630/README.md)
# Project 3: Sphere Calculator

A command-line C program that calculates the area, surface area, and volume of a sphere given its radius.

## What it does
- Prompts the user for a radius
- Calculates and prints:
  - Circle area (`π * r²`)
  - Sphere surface area (`4 * π * r²`)
  - Sphere volume (`(4/3) * π * r³`)

## Example
```
Enter the radius: 10
Area: 314.16
Surface Area: 1256.64
Volume: 4188.79
```

![Program output](./output.png)

## How to build/run
Since this uses `math.h`, the math library needs to be linked explicitly on most systems:
```bash
gcc sphere_calculator.c -o sphere_calculator -lm
./sphere_calculator
```

## Concepts practiced
- `double` for higher-precision decimal math (vs `float` in Project 1)
- `const` for a fixed value (`PI`)
- `math.h`'s `pow()` function for exponents
- Multiple formatted `%.2lf` outputs from one program

## What I learned
Learned that using `math.h` functions like `pow()` requires linking the math library at compile time with `-lm`, or the compiler throws an "undefined reference" error on some systems — this doesn't come up with just `stdio.h`. Also learned `math.h` provides a built-in `M_PI` constant, which is more precise than manually defining `PI` — something to switch to in future projects.
