class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                c0++;
            else if(nums[i]==1)
                c1++;
            else
                c2++;
        }
        int a=c0+c1;
        int b=c0+c1+c2;
        for(int j=0;j<c0;j++)
        {
            nums[j]=0;
        }
        for(int j=c0;j<a;j++)
        {
            nums[j]=1;
        }
        for(int j=a;j<b;j++)
        {
            nums[j]=2;
        }
    }
};