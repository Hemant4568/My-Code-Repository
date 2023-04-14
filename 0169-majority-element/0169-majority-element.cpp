class Solution {
public:
    int majorityElement(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int c=1;
        if(nums.size()==1)
            return nums[0]; 
        for(int i=0;i<nums.size()-1;i++)
        {
            
            if(nums[i]==nums[i+1])
                c++;
            if(c>nums.size()/2)
                return nums[i];
            if(nums[i]!=nums[i+1])
                c=1;
        }
        return 0;
    }
};