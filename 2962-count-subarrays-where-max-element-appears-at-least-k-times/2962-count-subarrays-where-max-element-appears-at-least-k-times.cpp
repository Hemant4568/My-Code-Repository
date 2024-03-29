class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int max_num = *max_element(nums.begin(),nums.end());
        long long count=0;
        long long right=0,left=0,ans=0;
        while(right<nums.size())
        {
            if(nums[right]==max_num)
                count++;
            while(count>=k)
            {
                if(nums[left]==max_num)
                    count--;
                left++;
                ans+=nums.size()-right;
            }
            right++;
        }
        return ans;
    }
};