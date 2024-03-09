class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
          int a=0;
        int b=0;
        int n1=nums1.size();
        int n2=nums2.size();
        while(a<n1 && b<n2 )
        {
            if(nums1[a]==nums2[b])
                return nums1[a];
            else if(nums1[a]>nums2[b])
                b++;
            else
                a++;
        }
        return -1;
    }
};