
# Reverse Pairs (Count of Reverse Pairs)

## 📌 Description
This C++ program solves the **Reverse Pairs** problem. Given an array of integers, the goal is to count the number of **reverse pairs**. A reverse pair is defined as a pair (i, j) such that:

```
i < j and nums[i] > 2 * nums[j]
```

The program uses a **modified merge sort** algorithm to count reverse pairs efficiently in **O(n log n)** time.

## ✨ Features
- Efficient solution using **divide and conquer** strategy.
- Handles large input sizes with good performance.
- Easy-to-use interface with user input for array elements.

## 🧠 How It Works
1. The user inputs the array size and array elements.
2. The merge sort function recursively sorts the array and counts reverse pairs.
3. During the merge step, the number of valid reverse pairs is counted using a two-pointer technique.
4. The result is printed after processing.

## ✅ Example Usage

### Input
```
Enter number of elements: 5
Enter elements:
1 3 2 3 1
```

### Output
```
Number of reverse pairs: 2
```

## 🧪 Compilation and Execution

### Compile the program
```sh
g++ reverse_pairs.cpp -o reverse_pairs
```

### Run the program
```sh
./reverse_pairs
```

## 📂 Files
- `reverse_pairs.cpp`: The main source code file implementing the solution.
- `README.md`: This documentation file.

## 🧑‍💻 Author
Nibishaka Raphael  
[MIT License](https://opensource.org/licenses/MIT)

## 📜 License
This project is open-source and available under the MIT License.
