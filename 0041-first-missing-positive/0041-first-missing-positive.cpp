class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int s=1;
        for(int i=0;i<mp.size();i++)
        {
            if(mp.find(s)==mp.end())
                break;
            else if(mp.find(s)!=mp.end())
                s++;
        }
        return s;
    }
    
};