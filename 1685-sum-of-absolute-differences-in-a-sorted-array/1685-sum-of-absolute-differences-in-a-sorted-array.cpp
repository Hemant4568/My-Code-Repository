class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int totalsum=0;
        for(int i:nums)
            totalsum+=i;
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=i*nums[i]-leftsum;
            ans[i]+=(totalsum-leftsum-(n-i)*nums[i]);
            leftsum+=nums[i];
        }
        return ans;
    }
};