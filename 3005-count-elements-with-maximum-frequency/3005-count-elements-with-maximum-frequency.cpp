class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int maxi=0;
        int sum=0;
        for(auto itr:mp)
        {
            maxi=max(maxi,itr.second);
        }
        for(auto itr2:mp)
        {
            if(itr2.second==maxi)
                sum+=itr2.second;
        }
        return sum;
    }
};