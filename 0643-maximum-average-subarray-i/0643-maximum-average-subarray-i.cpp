class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        
        ans=max(ans,sum/double(k));
        cout<<ans;
        for(int i=k;i<nums.size();i++)
        {
            sum+=nums[i]-nums[i-k];
            
            ans=max(ans,sum/double(k));
        }
        return ans;
    }
};