
# Maximum Product of Word Lengths

## Description
This C++ program computes the **maximum product of lengths** of two words in a list such that the two words **do not share any common letters**.

It uses **bit masking** to efficiently compare characters across pairs of words.

## Features
- Efficient comparison using bitwise operations.
- Time complexity: O(n²), suitable for moderate input sizes.
- User-friendly input/output interface.

## Problem Statement
Given a list of strings, return the maximum value of `length(word[i]) * length(word[j])` where the two words do **not share any common characters**.

## Example

**Input:**
```
Words: ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
```

**Output:**
```
Maximum Product of Word Lengths: 16
```

**Explanation:** The two words "abcw" and "xtfn" have no characters in common and their lengths are 4 and 4, so the product is 16.

## How It Works
- Each word is represented by a bitmask of 26 bits (one for each letter).
- If the bitwise AND of two words' masks is 0, they have no letters in common.
- Compare all valid pairs and track the maximum product.

## Compilation and Execution

### Compile
```bash
g++ max_product_word_lengths.cpp -o max_product
```

### Run
```bash
./max_product
```

## License
This project is open-source and available under the MIT License.
