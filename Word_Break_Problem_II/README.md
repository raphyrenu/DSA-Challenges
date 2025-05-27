
# Word Break Problem II (All Possible Segments)

## 📌 Description
This C++ program solves the **Word Break II** problem: given a string and a dictionary of words, the program returns **all possible segmentations** of the string such that each segment is a valid word in the dictionary.

It uses a **recursive backtracking approach** with **memoization** to avoid redundant computations and efficiently generate all valid sentences.

## ✨ Features
- Supports **multiple valid segmentations**.
- Efficient with **memoization (DP)** to handle overlapping subproblems.
- Allows **repetition of dictionary words** where needed.
- Interactive input for string and dictionary.

## 🧠 How It Works
1. The user inputs a string and a list of words (the dictionary).
2. The algorithm recursively tries to break the string at every position.
3. For every valid suffix (a word in the dictionary), it recursively checks the prefix.
4. Combines all valid results and memoizes each intermediate result for faster access.

## ✅ Example Usage

### Input
```
Enter the string to break: catsanddog
Enter number of words in dictionary: 5
Enter dictionary words:
cat
cats
and
sand
dog
```

### Output
```
All possible segmentations:
cat sand dog
cats and dog
```

## 🧪 Compilation and Execution

### Compile the program
```sh
g++ word_break.cpp -o word_break
```

### Run the program
```sh
./word_break
```

## 📂 Files
- `word_break.cpp`: The main source code file implementing the solution.
- `README.md`: This documentation file.

## 📝 Notes
- The dictionary can contain repeated or overlapping words.
- The output includes **all valid combinations** where the input string can be segmented into dictionary words.
- The algorithm uses **unordered_map** for memoization and **unordered_set** for fast dictionary lookup.

## 🧑‍💻 Author
Nibishaka Raphael
[MIT License](https://opensource.org/licenses/MIT)

## 📜 License
This project is open-source and available under the MIT License.
