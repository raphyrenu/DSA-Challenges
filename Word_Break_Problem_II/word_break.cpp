#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// Solution class that implements Word Break II
class Solution {
public:
    // Main function that breaks the word into all possible valid sentences
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end()); // fast lookup
        unordered_map<string, vector<string>> memo; // memoization
        return backtrack(s, wordSet, memo);
    }

private:
    // Recursive function to find all segmentations
    vector<string> backtrack(string s, unordered_set<string>& wordSet, unordered_map<string, vector<string>>& memo) {
        // If already computed, return cached result
        if (memo.find(s) != memo.end())
            return memo[s];

        vector<string> results;

        // If the whole string is a word, include it
        if (wordSet.find(s) != wordSet.end()) {
            results.push_back(s);
        }

        // Try splitting the string
        for (int i = 1; i < s.length(); ++i) {
            string left = s.substr(0, i);
            string right = s.substr(i);

            // Check if right part is in dictionary
            if (wordSet.find(right) != wordSet.end()) {
                vector<string> leftResults = backtrack(left, wordSet, memo);
                for (const string& l : leftResults) {
                    results.push_back(l + " " + right);
                }
            }
        }

        // Save to memo
        memo[s] = results;
        return results;
    }
};

int main() {
    Solution sol;

    // Sample input
    string s;
    int n;
    cout << "Enter the string to break: ";
    cin >> s;

    cout << "Enter number of words in dictionary: ";
    cin >> n;

    vector<string> wordDict(n);
    cout << "Enter dictionary words:\n";
    for (int i = 0; i < n; ++i) {
        cin >> wordDict[i];
    }

    // Get results
    vector<string> results = sol.wordBreak(s, wordDict);

    // Output the results
    cout << "\nAll possible segmentations:\n";
    for (const string& sentence : results) {
        cout << sentence << endl;
    }

    return 0;
}
