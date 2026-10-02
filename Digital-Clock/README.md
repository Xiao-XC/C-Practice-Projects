# Digital Clock

A command-line C program that displays the current time, refreshing every second, with a non-blocking power-off option. Originally Bro Code's final course project — later expanded into one feature of a larger Time Utility Program.

## What it does
- Continuously displays the current local time (`HH:MM:SS`), refreshing once per second
- Clears and redraws the screen each refresh for a clean, flicker-free display
- Lets the user exit back to the menu by pressing `0`, without ever pausing the clock to wait for input

## Example
```
DIGITAL CLOCK
14:32:07

Power Button(1/0)
```

## How to build/run
This program uses `windows.h` and `conio.h`, which are **Windows-only**.
```bash
gcc digital_clock.c -o digital_clock
./digital_clock
```

## Concepts practiced
- `time_t` and `struct tm`, retrieved with `time()` and `localtime()`
- `Sleep()` for a 1-second refresh interval
- `system("cls")` to redraw the screen cleanly each tick
- Non-blocking keyboard input with `_kbhit()` and `_getch()` from `conio.h`

## What I learned
This project went through several iterations before the loop actually worked the way it looks like it should. The first version used `scanf` inside the loop to check for a power-off input, which seemed reasonable but was actually the core problem: `scanf` **blocks** and pauses the entire program until the user types something, so the clock couldn't refresh freely — it would show one frame, then freeze waiting for input. Switching to `_kbhit()`/`_getch()` solved this, since `_kbhit()` only *checks* whether a key is waiting without ever pausing execution, letting the clock keep ticking every second while still being able to react instantly if a key was pressed.

Along the way, I also hit a real crash bug: I passed `(*option)` into `scanf` instead of `option` — since `option` was already a pointer, dereferencing it passed a *value* where `scanf` needed a *memory address*, and the program crashed trying to write to an invalid address. Fixing it was as simple as removing the `*`, but understanding *why* it crashed was the real lesson in how pointers and `scanf` actually interact.

This same clock loop and debugging process became the foundation for the Digital Clock feature inside the larger **Time Utility Program** capstone.
