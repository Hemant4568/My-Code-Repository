class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int res=0;
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto it:mp)
        {
            if(it.second==2)
                res^=it.first;
        }
        return res;
    }
};