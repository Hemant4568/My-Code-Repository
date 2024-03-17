class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int maxi=0;
            int c=0;
            while(nums[i]!=0)
            {
                maxi=max(maxi,nums[i]%10);
                nums[i]/=10;
                c++;
            }
            int a=0;
            while(c!=0)
            {
                a=a*10+maxi;
                c--;
            }
            sum+=a;
        }
        return sum;
    }
};