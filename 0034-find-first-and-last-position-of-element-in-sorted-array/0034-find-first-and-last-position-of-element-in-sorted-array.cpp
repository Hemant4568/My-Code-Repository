class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        if(n<1)
        {
            
            ans.push_back(-1);
            ans.push_back(-1);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
            if(i==n-1)
            {
                ans.push_back(-1);
                ans.push_back(-1);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
               if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }
        
        return ans;
    }
};