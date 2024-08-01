class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(string st:details)
        {
            if(st[11]>'6')
                c++;
            if(st[11]=='6' && st[12]>'0')
                c++;
        }
        return c;
    }
};