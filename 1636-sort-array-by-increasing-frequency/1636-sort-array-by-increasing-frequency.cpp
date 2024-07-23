class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
       vector<pair<int,int>>temp(mp.begin(),mp.end());
        sort(temp.begin(),temp.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second) {
            return a.second < b.second; 
        } else {
            return a.first > b.first; }
    });
        vector<int>ans;
        for(auto it:temp)
            while(it.second!=0){
            ans.push_back(it.first);
                it.second--;
            }
        return ans;
    }
};