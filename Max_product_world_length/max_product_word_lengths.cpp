
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxProduct(vector<string>& words) {
    int n = words.size();
    vector<int> masks(n, 0);

    // Convert each word into a bitmask
    for (int i = 0; i < n; ++i) {
        for (char c : words[i]) {
            masks[i] |= (1 << (c - 'a'));
        }
    }

    int maxProd = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((masks[i] & masks[j]) == 0) {
                int product = words[i].size() * words[j].size();
                maxProd = max(maxProd, product);
            }
        }
    }

    return maxProd;
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter the words:\n";
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    int result = maxProduct(words);
    cout << "Maximum Product of Word Lengths: " << result << endl;
    return 0;
}
