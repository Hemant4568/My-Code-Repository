class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int sum=target-nums[i];
            if(mp.find(sum)!=mp.end()){
                    ans.push_back(mp[sum]);
                    ans.push_back(i);
                }
            mp[nums[i]]=i;
        }
        return ans;
    }
};