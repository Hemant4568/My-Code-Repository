const int MOD = 1e9 + 7;
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        vector<int>temp(n+1,0);
        for(int i=0;i<n;i++)
        {
            temp[i+1]=temp[i]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                ans.push_back(temp[j+1]-temp[i]);
                
            }
        }
        int sum=0;
        sort(ans.begin(),ans.end());
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        for(int i=left;i<=right;i++)
        {
            sum=(sum+ans[i-1])%MOD;
        }
        return sum;
    }
};