class Solution {
public:
    int maxOperations(string s) {
        int c=0;
        int c1=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1')
                c1++;
            if(s[i]=='0' && s[i+1]=='1')
                c+=c1;
        }
        if(s[s.size()-1]=='0')
            c+=c1;
        return c;
    }
};