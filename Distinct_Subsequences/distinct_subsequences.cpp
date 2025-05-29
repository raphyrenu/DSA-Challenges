
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numDistinct(string s, string t) {
    int m = s.size(), n = t.size();
    vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

    // Base case: An empty target string can be formed from any prefix of s
    for (int i = 0; i <= m; ++i) {
        dp[i][0] = 1;
    }

    // Fill dp table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[m][n];
}

int main() {
    string s, t;
    cout << "Enter source string (s): ";
    cin >> s;
    cout << "Enter target string (t): ";
    cin >> t;

    int result = numDistinct(s, t);
    cout << "Number of distinct subsequences: " << result << endl;

    return 0;
}
