
# Advanced Software Paradigms - Assignment 5

## Problem
Link: https://www.eolymp.com/en/problems/1964

The task is to find the last remaining number in a sequence after repeatedly removing elements according to three rules:

1. Remove elements at even positions.
2. Remove elements at odd positions.
3. Remove elements at positions divisible by 3.

The operations are repeated until only one number remains. Positions are recalculated after each operation.

## Programming Languages

Two programming languages were used:

- **C++** - Imperative programming
- **Haskell** - Functional programing

Both solutions process the sequence without using a mathematical formula.

## C++ Implementation

**File:** `CPP/main.cpp`

C++ solution uses vector to store the sequence.

- Initializes vector contaning numbers from 1 to n.
- Uses `for` and `while` loops to process element.
- Applies the three elimination rules in order.
- Updates vector with remaining elements.
- Repeats until only one number remain.

**E-olymp Result:** 100/100

## Haskell Implementation

**File:** `Haskell/Main.hs`

Haskell solution uses functional programming techniques.

- Uses `zip` to associate elements with their positions.
- Uses `filter` to select the remaining elements
- Uses `map` to extract the numbers
- Uses recursion and pattern matching to repeat the operations.
- Does not use mutable variables or imperative loops.

**E-olymp Result:** 97/100 (Time Limit Exceeded)

## Results

| Language | Paradigm | Score |
|----------|----------|-------|
| C++ | Imperative | 100/100 |
| Haskell | Functional | 97/100 |

Both solutions meet the assignment's minimum score requirement.


## Performance Comparison

The C++ solution achieved 100/100 while the Haskell solution achieved 97/100.

The C++ implementation uses vector and update its elements in place which reduces unnecessary memory alocations.

The Haskell implementation uses `map`, `filter`, and `zip` to process lists. These operations may introduce additional processing overhead compared to C++ implementation.

This overhead is a possible reason why the Haskell solution exceeded the time limit on some test cases.

## How to Run

Both solutions can be executed using [OnlineGDB](https://www.onlinegdb.com/).

### C++

1. Open https://www.onlinegdb.com/
2. Select C++ as the programming language.
3. Copy the code from `CPP/main.cpp` into the editor.
4. Click Run.
5. Enter an integer `n` as input.

### Haskell

1. Open https://www.onlinegdb.com/
2. Select Haskell as the programing language
3. Copy the code from `Haskell/Main.hs` into the editor.
4. Click Run.
5. Enter an integer `n` as input.

Both programs read an integer `n` and print the last remaining number.

## Conclusion

This assignment demonstrates two different programing paradigms for solving the same problem.

C++ uses loops, mutable variable and vector processing while Haskell uses pure functions, list operations and recursion.


## References

- [Haskell zip Function](https://hoogle.haskell.org/?hoogle=zip)
- [Haskell filter Function](https://hoogle.haskell.org/?hoogle=filter)
- [Haskell map Function](https://hoogle.haskell.org/?hoogle=map)

