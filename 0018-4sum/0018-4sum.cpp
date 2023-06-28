class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>s;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int k=j+1;
                int a=nums.size()-1;
                while(k<a)
                {
                   double sum=((double)nums[i]+nums[j]+nums[k]+nums[a]);
                    if(sum==target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[a]});
                        k++;
                        a--;
                    }
                    else if(sum<target)
                        k++;
                    else
                        a--;
                }
            }
        }
        for(auto& it:s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};