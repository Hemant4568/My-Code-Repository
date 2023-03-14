class Solution {
public:
    
    int totalzero(int n)
    {
        int c=0;
        while(n>0)
        {
            if(n%10==0)
                c++;
            n=n/10;
        }
        return c;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n/2;i++)
        {
            if((totalzero(i)==0) && (totalzero(n-i)==0))
                return {i,n-i};
        }
        return {};
    }
};
