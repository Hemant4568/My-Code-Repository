class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=nums.size();
        if(nums.size()==3)
        {
            int m=nums[0]*nums[1]*nums[2];
            return m;
        }
        if(nums.size()>3)
        {
            sort(nums.begin(),nums.end());
            int n=nums[a-1]*nums[a-2]*nums[a-3];
            int x=nums[0]*nums[1]*nums[a-1];
            return max(n,x);
        }
        return 0;
    }
};