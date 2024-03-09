class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
        if(n==1)
            return 1;
        int k=2;
        for(int i=2;i<nums.size();i++)
        {
            if((nums[i]!=nums[k-1] || nums[i]!=nums[k-2]))
                nums[k++]=nums[i];
        }
        return k;
    }
};