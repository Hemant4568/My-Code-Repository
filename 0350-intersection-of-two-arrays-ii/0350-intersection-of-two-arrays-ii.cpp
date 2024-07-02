class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        set<int>s;
        vector<int>res;
        for(int i:nums1)
        {
            mp[i]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end() && mp[nums2[i]]>0)
            {
                res.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return res;
    }
};