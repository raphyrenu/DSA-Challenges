#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Min-Heap Element to store value along with the position in the matrix
struct Element {
    int value;
    int row;
    int col;

    // Comparator for the priority queue (min-heap)
    bool operator>(const Element& other) const {
        return value > other.value;
    }
};

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();

    // Min-Heap (Priority Queue)
    priority_queue<Element, vector<Element>, greater<Element>> minHeap;

    // Insert the first element of each row into the min-heap
    for (int i = 0; i < n; i++) {
        minHeap.push({matrix[i][0], i, 0});
    }

    // Extract the minimum element k times
    for (int i = 0; i < k - 1; i++) {
        Element current = minHeap.top();
        minHeap.pop();

        // If there's a next element in the same row, insert it into the heap
        if (current.col + 1 < n) {
            minHeap.push({matrix[current.row][current.col + 1], current.row, current.col + 1});
        }
    }

    // The top of the heap now contains the k-th smallest element
    return minHeap.top().value;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k = 5;

    int result = kthSmallest(matrix, k);
    cout << "The " << k << "-th smallest element is: " << result << endl;

    return 0;
}
