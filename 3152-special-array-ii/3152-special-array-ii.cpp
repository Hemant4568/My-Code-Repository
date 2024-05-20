class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
          int n = nums.size();
    std::vector<int> mismatch(n - 1, 0);
    std::vector<int> prefixMismatch(n, 0);

    for (int i = 0; i < n - 1; ++i) {
        mismatch[i] = (nums[i] % 2 != nums[i + 1] % 2) ? 1 : 0;
    }

    for (int i = 1; i < n; ++i) {
        prefixMismatch[i] = prefixMismatch[i - 1] + mismatch[i - 1];
    }

    std::vector<bool> results;
    for (const auto& query : queries) {
        int fromi = query[0];
        int toi = query[1];
        int numMismatches = prefixMismatch[toi] - prefixMismatch[fromi];
        bool isSpecial = (numMismatches == (toi - fromi));
        results.push_back(isSpecial);
    }
    
    return results;
    }
};