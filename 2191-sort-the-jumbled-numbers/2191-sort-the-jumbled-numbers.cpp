class Solution {
public:
    int mapValue(int num, const vector<int>& mapping) {
    string numStr = to_string(num);
    for (char& ch : numStr) {
        ch = '0' + mapping[ch - '0'];
    }
    return stoi(numStr);
}
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> mappedNums;
    for (int i = 0; i < nums.size(); ++i) {
        mappedNums.push_back({mapValue(nums[i], mapping), i});
    }
    stable_sort(mappedNums.begin(), mappedNums.end());
    vector<int> sortedNums;
    for (const auto& p : mappedNums) {
        sortedNums.push_back(nums[p.second]);
    }
    return sortedNums;
    }
};