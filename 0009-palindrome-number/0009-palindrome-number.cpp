class Solution {
public:
    bool isPalindrome(int x) {
      long long  int s=0;
        int i=0;
        int y=x;
        if(x<0)
            return 0;
        while(y>0)
        {
            int a=y%10;
            s=s*10+a;
            y=y/10;
            
        }
        if(s==x)
            return 1;
        else
            return 0;
    }
};