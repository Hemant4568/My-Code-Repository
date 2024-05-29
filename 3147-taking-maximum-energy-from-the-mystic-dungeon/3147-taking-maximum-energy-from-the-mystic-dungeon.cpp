class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
    vector<int> dp(n, 0);
    
    // Initialize the dp array with the energy values
    for (int i = 0; i < n; ++i) {
        dp[i] = energy[i];
    }
    
    // Process the array from the end to the beginning
    for (int i = n - 1; i >= 0; --i) {
        if (i + k < n) {
            dp[i] += dp[i + k];
        }
    }
    
    // The result is the maximum value in the dp array
    return *max_element(dp.begin(), dp.end());
    }
};