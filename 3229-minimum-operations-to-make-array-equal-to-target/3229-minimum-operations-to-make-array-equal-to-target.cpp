class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
       long long ans=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>target[i])
            {
                if(c1<nums[i]-target[i])
                    ans+=(nums[i]-target[i]-c1);
                c1=nums[i]-target[i];
                c2=0;
            }
           else if(nums[i]<target[i])
            {
                if(c2<target[i]-nums[i])
                    ans+=(target[i]-nums[i]-c2);
                c2=target[i]-nums[i];
                c1=0;
            }
            else
            {
                c1=0;
                c2=0;
            }
        }
        return ans;
    }
};