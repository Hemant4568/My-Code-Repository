// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long int small=0;
       long long int large=n;
     long long   int m;
        while(small<=large)
        {
           long long int mid=(small+large)/2;
            if(isBadVersion(mid)==1)
            {
                
                large=mid-1;
            }
            else
                small=mid+1;
        }
        return large+1;
       
    }
};