class Solution {
public:
    int minSwaps(vector<int>& v) {
      // int start=0,end=nums.size()-1;
      //   int c=0;
      //   if(nums[start]==1 && nums[end]==1)
      //       return 0;
      //   while(start<end)
      //   {
      //       if(nums[start]==1 && nums[end]==1)
      //           while(start<end){
      //               if(nums[start]==0)
      //                   c++;
      //               start++;
      //           }
      //       else if(nums[start]==1 && nums[end]!=1)
      //           end--;
      //       else if(nums[start]!=1 && nums[end]==1)
      //           start++;
      //       else if(nums[start]!=1 && nums[end]!=1)
      //       {
      //           start++;
      //           end--;
      //       }
      //   }
      //   return c;
         int ones = 0;
        for (auto& x : v) {
            if (x == 1) {
                ones++;
            }
        }
        
        if (ones == 0 || ones == 1) {
            return 0;
        }
        
        int n = v.size();
        int windowSum = accumulate(v.begin(), v.begin() + ones, 0);
        int maxOnesInWindow = windowSum;
        
        for (int i = 0; i < n; ++i) {
            int end = (i + ones) % n; 
            int start = i;
            
            windowSum -= v[start];
            windowSum += v[end];
            
            maxOnesInWindow = max(maxOnesInWindow, windowSum);
        }
        
        return ones - maxOnesInWindow;
    }
};