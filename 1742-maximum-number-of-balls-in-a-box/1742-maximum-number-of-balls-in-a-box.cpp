
#include<bits/stdc++.h>
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int m=INT_MIN;
          
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int t=i;
            int s=0;
            while(t>0)
            {
                int a=t%10;
                s+=a;
               t=t/10;
            }
           mp[s]++;
             m=max(m,mp[s]);
    }
        return m;
    }
   
};