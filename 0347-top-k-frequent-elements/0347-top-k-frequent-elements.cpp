#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
class Solution {
public:
   static bool compare(pair<int,int> &p1,pair<int, int> &p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       int s = mp.size();
    pair<int, int> p[s];
    int i = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it)
      p[i++] = make_pair(it->first, it->second);
    sort(p, p + s, compare);
    for (int i = 0; i < s; i++)
    {
        while (k>0){
            ans.push_back(p[i].first);
            i++;
            k--;
        }
        }
         return ans;      
    }
};