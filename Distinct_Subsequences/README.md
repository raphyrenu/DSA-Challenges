
# Distinct Subsequences

## Description
This C++ program calculates the **number of distinct subsequences** of a string `s` which equals a target string `t`.

It uses **dynamic programming** to solve the problem efficiently.

## Features
- Solves the classic **distinct subsequences** problem.
- Optimized with **2D dynamic programming table**.
- Handles long strings using `long long` to avoid integer overflow.

## Problem Definition
Given two strings `s` and `t`, return the number of distinct subsequences of `s` which equals `t`.

A subsequence is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters.

## Example

**Input:**
```
s = "rabbbit"
t = "rabbit"
```

**Output:**
```
3
```

Explanation: There are 3 ways to delete a character from `s` to get `t`.

## How to Compile and Run

### Compile
```bash
g++ distinct_subsequences.cpp -o distinct_subsequences
```

### Run
```bash
./distinct_subsequences
```

## License
This project is open-source and available under the MIT License.
