class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c=0;
        map<int,int>mp;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            c+=mp[sum-goal];
            mp[sum]++;
        }
        return c;
    }
};