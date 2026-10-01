# Project 12: Time Utility Program (Capstone)

A multi-feature command-line C program combining a digital clock, a world clock, an alarm, and a countdown timer into one menu-driven application. Built as a capstone after finishing Bro Code's full C course, to combine most of the concepts learned into one cohesive program instead of isolated demos.

> **Course completion note:** this project started as Bro Code's final course project (a basic digital clock) and was expanded well beyond the original scope — adding structs, arrays of structs, an alarm system, and a non-blocking countdown timer — as a way to actually apply everything taught across the full course in one combined program. Built in honor of Bro Code's *C Programming Full Course for Free*, which was the foundation for this entire repo.

## What it does
A main menu lets the user choose between:
1. **Digital Clock** — live-updating current time, refreshed every second
2. **World Clock** — current time in multiple cities at once, calculated from UTC using each city's offset
3. **Alarm** — set a 12-hour alarm time (with AM/PM), which beeps when the current time matches
4. **Timer** — a countdown timer with start/pause/resume controls, accurate to the system clock rather than loop timing

All four features run continuously without blocking on input, using non-blocking keyboard checks to allow the user to exit back to the menu at any time.

## Example
```
*** Time Utilities ***
Time Menu
1. Digital Time
2. World Clock
3. Alarm
4. Timer
5. Power Off
Enter your choice: 2

World Clock
New York: 09:42:13
London: 14:42:13
Tokyo: 23:42:13
Sydney: 01:42:13

Power Button(1/0)
```

## How to build/run
This program uses `windows.h`, `conio.h`, and `Sleep()`/`Beep()`, which are **Windows-only**. It will not compile as-is on Mac/Linux.
```bash
gcc time_utility_program.c -o time_utility_program
./time_utility_program
```

## Concepts practiced
- `typedef struct` for custom data types (`Cities`, `timeAlarm`)
- Arrays of structs, looped through to display multiple cities at once
- `time_t` / `struct tm`, `localtime()` vs `gmtime()` and when each is appropriate
- Non-blocking input with `_kbhit()` / `_getch()` from `conio.h`, so a continuously refreshing loop can still react to a keypress without pausing
- Ternary operators for concise conditional assignment
- 12-hour to 24-hour time conversion, including the edge cases at 12 AM/12 PM
- Elapsed-time calculation using `time(NULL)` deltas instead of decrementing a counter each loop — keeps the timer accurate even if `Sleep()` timing isn't perfectly precise
- Input buffer flushing (`while ((ch = getchar()) != '\n' && ch != EOF)`) to clear bad input left behind by a failed `scanf`
- Debugging timing/refresh-order bugs — several bugs in this project weren't logic errors, but cases where correct logic was hidden from the user because a screen clear or loop re-print happened before the output could be seen (missing `Sleep()` on invalid menu input, `system("cls")` called before a message had printed)

## What I learned
This was the first project combining multiple structs, non-blocking input, and several independent features sharing one menu loop. A few specific things that took real debugging to get right:
- **Pointer vs. value mix-up:** passed `(*option)` into `scanf` instead of `option` — since `option` was already a pointer, dereferencing it passed a value where `scanf` needed an address, causing a crash.
- **Stale state in a menu loop:** the main menu's `do-while` loop didn't re-prompt for a new `option` after each feature returned, so exiting a feature would just immediately relaunch it — fixed by re-asking for menu input at the end of each loop iteration.
- **UTC vs. local time:** `WorldClock()` needed to start from `gmtime()` (UTC) and add each city's offset manually, while `Alarm()` needed `localtime()` directly, since the user sets an alarm in their own local time.
- **Hour wraparound and 12-hour conversion:** both needed explicit handling for edge cases (negative hours wrapping with `((h % 24) + 24) % 24`, and 12 AM/12 PM being the one case where simple `+12` logic breaks).
- **Timer's pause/resume logic:** this part I leaned on outside help to design, since I didn't have a mental model yet for tracking elapsed time across pauses. I went back afterward and traced through the logic until I understood it fully — specifically, why `remaining` only updates at the moment of pausing (banking the real elapsed seconds), while `startTime` just resets to a fresh reference point on each resume, so the countdown stays accurate against the real system clock instead of drifting from imprecise loop timing. I can explain and defend this logic even though I didn't invent the pattern myself first.

## Resume bullet (draft)
"Built a multi-feature C console application (digital clock, world clock, alarm, countdown timer) using structs, non-blocking input handling, and real-time elapsed-time calculations; independently debugged pointer, timezone, and UI-refresh-order bugs."
