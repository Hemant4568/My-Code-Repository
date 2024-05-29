class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--)
        {
            int a=-nums[i];
            if(mp.find(a)!=mp.end())
                return nums[i];
        }
        return -1;
    }
};