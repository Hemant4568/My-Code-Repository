class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        double ans;
        int m=nums1.size();
        if(m%2==0)
        {
            double a=nums1[m/2];
            double b=nums1[(m/2)-1];
            ans=(a+b)/2;
        }
        else
            ans=nums1[m/2];
        return ans;
    }
};