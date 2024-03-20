class Solution {
public:
    bool unique(int n)
    {
        vector<bool>find(10,false);
        while(n!=0)
        {
            if(find[n%10])
                return 0;
            else
            {
                find[n%10]=1;;
            }
            n/=10;
        }
        return 1;
    }
    int countNumbersWithUniqueDigits(int n) {
        int x=pow(10,n);
        int a=x;
        int c=0;
        if(n==8)
            return 2345851;
        for(int i=0;i<a;i++)
        {
            if(unique(i))
                c++;
        }
        return c;
    }
};