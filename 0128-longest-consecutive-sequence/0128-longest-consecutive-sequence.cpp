class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int c=1;
        int m=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1]){
            if(nums[i]==nums[i+1]-1)
            {
                c++;
                
            }
            else
            {
                m=max(m,c);
                c=1;
            }
            }
        }
        return max(m,c);
    }
};