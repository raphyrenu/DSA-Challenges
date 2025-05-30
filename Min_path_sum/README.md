
# Minimum Path Sum (Grid Path)

## Description
This C++ program calculates the **minimum path sum** from the top-left corner to the bottom-right corner of a grid. You can only move **right** or **down** at any point in time.

It uses **Dynamic Programming** to compute the result efficiently.

## Features
- Efficient solution using **O(m × n)** time and space.
- Handles any grid size dynamically.
- Interactive console input for custom grid dimensions and values.

## Problem Statement
Given an `m x n` grid filled with non-negative numbers, find a path from the **top-left to bottom-right**, which minimizes the sum of all numbers along its path.

### Constraints:
- Only moves allowed are to the **right** or **down**.
- Grid values are non-negative integers.

## Example

**Input:**
```
Grid:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
```

**Output:**
```
Minimum Path Sum: 7
```

**Explanation:** Path is 1 → 3 → 1 → 1 → 1.

## How to Compile and Run

### Compile
```bash
g++ min_path_sum.cpp -o min_path_sum
```

### Run
```bash
./min_path_sum
```

## License
This project is open-source and available under the MIT License.
