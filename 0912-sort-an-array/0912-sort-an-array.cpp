class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // map<int,int>mp;
        // for(int i:nums)
        //     mp[i]++;
        // vector<int>ans;
        // for(auto it:mp)
        // {
        //     int i=it.second;
        //     while(i!=0)
        //     {
        //         ans.push_back(it.first);
        //         i--;
        //     }
        // }
        // return ans;
        sort(nums.begin(),nums.end());
        return nums;
    }
};