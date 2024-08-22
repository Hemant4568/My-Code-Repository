class Solution {
public:
    int strangePrinter(string s) {
        int n = s.size();
        if (n == 0) return 0;

        // dp[i][j] will store the minimum number of turns to print s[i...j]
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: a single character requires one turn
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        // Fill the dp table for substrings of increasing length
        for (int length = 2; length <= n; length++) {
            for (int i = 0; i + length - 1 < n; i++) {
                int j = i + length - 1;
                dp[i][j] = dp[i][j - 1] + 1;
                for (int k = i; k < j; k++) {
                    if (s[k] == s[j]) {
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j - 1]);
                    }
                }
            }
        }

        // The result is stored in dp[0][n-1] (the minimum turns for the entire string)
        return dp[0][n - 1];
    }
};