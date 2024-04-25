class Solution {
public:
    bool isprime(int n)
    {
        if(n==1)
            return 0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
        {
            if(isprime(nums[i]))
            {
                temp.push_back(i);
            }
        }
            if (temp.size() < 2) {
        return 0; 
            }

         int minVal = temp[0];
    int maxDiff = temp[1] - temp[0];

    for (int i = 2; i < temp.size(); ++i) {
        maxDiff = max(maxDiff, temp[i] - minVal);
        minVal = min(minVal, temp[i]);
    }


    return maxDiff;
    }
};