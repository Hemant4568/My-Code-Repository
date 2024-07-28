class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            int a=nums[i];
            while(a>0)
            {
                a/=10;
                c++;
            }
            if(c==1)
                sum1+=nums[i];
            else
                sum2+=nums[i];
        }
        if(sum1>sum2 || sum1<sum2)
            return 1;
        return 0;
    }
};