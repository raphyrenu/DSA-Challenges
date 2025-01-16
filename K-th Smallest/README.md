# K-th Smallest Element in a Sorted Matrix

## Problem Description

Given an `n x n` matrix where each of the rows and columns is sorted in ascending order, the task is to find the **k-th** smallest element in the matrix.

### Example:

For the following input matrix and `k = 5`:

The **5-th smallest element** in the matrix is `9`.

### Constraints:

- `1 <= n <= 300`
- `1 <= k <= n * n`
- Each row and each column of the matrix is sorted in ascending order.

---

## Approach

### Key Insights:
- The matrix is sorted both row-wise and column-wise.
- We can use a **min-heap** (priority queue) to efficiently retrieve the smallest elements.
- By keeping track of the smallest elements from each row, we can extract the smallest element in the matrix step by step.

### Solution Strategy:
1. **Heap Initialization**:
   - Insert the first element of each row into a min-heap.

2. **Heap Operations**:
   - Extract the minimum element from the heap.
   - After extracting an element, insert the next element from the same row into the heap.
   - Repeat the extraction process `k` times. The `k`-th extraction will give us the k-th smallest element.

### Time Complexity:
- **O(k log n)** where `n` is the number of rows or columns, and `k` is the number of extractions.

### Space Complexity:
- **O(n)** for the heap, where we store at most `n` elements at any time.


### Example:

- **Input**

```bash

 [
    [1, 5, 9],
    [10, 11, 13],
    [12, 13, 15]
 ]

- **Output**

```bash
   The 5-th smallest element is: 9
