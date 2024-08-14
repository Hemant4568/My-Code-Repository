class Solution {
public:
    int countPairs(const vector<int>& nums, int mid) {
    int count = 0;
    int n = nums.size();
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < n && nums[j] - nums[i] <= mid) {
            j++;
        }
        count += j - i - 1;
    }

    return count;
}

    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
    int left = 0, right = nums.back() - nums.front();

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (countPairs(nums, mid) < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;

    }
};