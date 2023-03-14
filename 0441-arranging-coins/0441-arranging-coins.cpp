class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)
            return 1;
        int c=0;
       for(int i=1;n>0;i++)
       {
           n=n-i;
           c++;
           
       }
        if(n==0)
            return c;
        else
        return c-1;
        
        
    }
};