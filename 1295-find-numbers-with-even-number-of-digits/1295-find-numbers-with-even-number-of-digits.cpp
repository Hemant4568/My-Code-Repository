class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            int c1=0;
            while(nums[i]>0)
            {
                int a=nums[i]%10;
                c1++;
                nums[i]/=10;
            }
            if(c1%2==0)
                c++;
        }
        return c;
    }
};