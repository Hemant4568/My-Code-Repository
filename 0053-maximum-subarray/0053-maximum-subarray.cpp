class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int maxCount=INT_MIN, temp=0;
        for(int i=0; i<nums.size(); i++){
            temp+=nums[i];
            if(temp <nums[i]) 
            temp = nums[i];
            if(maxCount<temp) 
            maxCount = temp; 
        }
        return maxCount;
    }
};