class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLength = 0;
    int count = 0;
    unordered_map<int, int> countMap;
    countMap[0] = -1; 
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0)
            count--;
        else
            count++;

        if (countMap.find(count) != countMap.end()) {
            maxLength = max(maxLength, i - countMap[count]);
        } else {
            countMap[count] = i;
        }
    }

    return maxLength;
    }
};