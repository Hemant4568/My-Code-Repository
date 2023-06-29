class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int st=s.size();
        while(s[i]==' ')
        {
            i++;
        }
        int p=0;
        int n=0;
        if(s[i]=='+'){
            p++;
            i++;
    }
        if(s[i]=='-'){
            n++;
            i++;
        }
        double ans=0;
        while(i<st && s[i]>='0' && s[i]<='9')
        {
            ans=ans*10+(s[i]-'0');
            i++;
        }
        if(n>0)
            ans=-ans;
        if(p>0 && n>0)
            return 0;
        if(ans>INT_MAX)
            return INT_MAX;
        if(ans<INT_MIN)
            return INT_MIN;
        return (int)ans;
    }
};