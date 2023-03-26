class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>m;
        int a;
        for(int i=0;i<nums.size();i++)
        {
               m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>1)
                a=nums[i];
        }
        return a;
    }
};