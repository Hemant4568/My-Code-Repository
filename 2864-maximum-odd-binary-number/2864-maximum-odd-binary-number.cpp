class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                s[i]='0';
                c++;
            }
        }
        int j=0;
        int temp=c;
        while(j<c)
        {
            if(temp==1)
                break;
            s[j]='1';
            j++;
            temp--;
        }
       
        s[n-1]='1';
        return s;
    }
};