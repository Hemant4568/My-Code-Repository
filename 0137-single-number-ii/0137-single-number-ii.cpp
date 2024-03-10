class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int it:nums)
            mp[it]++;
        for(auto itr:mp)
            if(itr.second==1)
                return itr.first;
        return 0;
    }
};