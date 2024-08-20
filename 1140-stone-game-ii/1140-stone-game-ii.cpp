class Solution {
public:
     int solve(int i, int M, vector<int>& piles, vector<vector<int>>& memo, vector<int>& suffix_sum) {
        int n = piles.size();
        
        // If we have reached or passed the end of the piles, return 0
        if (i >= n) return 0;
        
        // If this state has already been computed, return the stored result
        if (memo[i][M] != -1) return memo[i][M];
        
        // If we can take all remaining stones, return the total remaining stones
        if (i + 2 * M >= n) return suffix_sum[i];
        
        // Try taking X piles, where 1 <= X <= 2 * M
        int max_stones = 0;
        for (int X = 1; X <= 2 * M && i + X <= n; X++) {
            // Alice takes X piles, and the next state is for Bob
            // Bob plays optimally and the next state starts from i + X with max(M, X)
            max_stones = max(max_stones, suffix_sum[i] - solve(i + X, max(M, X), piles, memo, suffix_sum));
        }
        
        // Store the result in the memoization table
        memo[i][M] = max_stones;
        
        return max_stones;
    }
    int stoneGameII(vector<int>& piles) {
            int n = piles.size();
        
        // Create a memoization table initialized to -1
        vector<vector<int>> memo(n, vector<int>(n + 1, -1));
        
        // Compute the suffix sum array
        vector<int> suffix_sum(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suffix_sum[i] = suffix_sum[i + 1] + piles[i];
        }
        
        // Recursively calculate the maximum stones Alice can collect
        return solve(0, 1, piles, memo, suffix_sum);
    }
};