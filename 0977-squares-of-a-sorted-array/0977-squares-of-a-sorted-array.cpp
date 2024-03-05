class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int n=nums.size();
        vector<int>res(n);
        for(int i=nums.size()-1;i>=0;i--)
        {
            int xl=nums[left]*nums[left];
            int xr=nums[right]*nums[right];
            if(xl>xr)
            {
                res[i]=xl;
                left++;
            }
            else
            {
                res[i]=xr;
                right--;
            }
        }
        
        return res;
    }
  
};