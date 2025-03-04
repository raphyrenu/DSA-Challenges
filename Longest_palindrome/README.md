# Longest Palindromic Substring

## Description
This C++ program finds the **longest palindromic substring** in a given input string. It uses the **expand around center** technique to efficiently determine palindromes within the string.

## Features
- Handles both **odd-length** and **even-length** palindromes.
- Uses **O(n²)** time complexity, making it efficient for moderate input sizes.
- Provides a simple **interactive console interface** for user input.

## How It Works
1. The user enters a string.
2. The program iterates through each character, treating it as a potential palindrome center.
3. It expands outward from each center to find the longest palindromic substring.
4. The longest palindrome is displayed as output.

## Example Usage
**Input:**
```
Enter a string: abaxyzzyxf
```
**Output:**
```
Longest Palindromic Substring: yzzy
```

## Compilation and Execution
### Compile the program:
```sh
g++ longest_palindrome.cpp -o longest_palindrome
```
### Run the program:
```sh
./longest_palindrome
```

## Notes
- If multiple palindromes of the same length exist, the **first occurrence** is returned.
- If the input string is empty, the program returns an empty string.

## License
This project is open-source and available under the MIT License.
