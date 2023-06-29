class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=-1;
        int end=-1;
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int middle=left+(right-left)/2;
            if(nums[middle]==target){
            start=middle;
            right=middle-1;}
            else if(nums[middle]<target)
                left=middle+1;
            else
                right=middle-1;
        }
         left=0;
         right=nums.size()-1;
         while(left<=right)
        {
            int middle=left+(right-left)/2;
            if(nums[middle]==target){
            end=middle;
            left=middle+1;}
            else if(nums[middle]<target)
                left=middle+1;
            else
                right=middle-1;
        }
        return {start,end};
    }
};