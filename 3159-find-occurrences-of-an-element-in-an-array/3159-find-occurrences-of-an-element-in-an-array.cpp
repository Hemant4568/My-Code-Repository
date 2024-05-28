class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;
        map<int,vector<int>>mp1;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==x)
              mp1[x].push_back(i);
      }
        for(int i=0;i<queries.size();i++)
        {
            if(mp1.find(x)!=mp1.end() && queries[i]<=mp1[x].size())
                ans.push_back(mp1[x][queries[i]-1]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};