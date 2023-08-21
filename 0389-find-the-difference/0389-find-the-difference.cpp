class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char a;
            for(int i=0;i<m;i++)
            {
                if(s[i]==t[i])
                    continue;
                else
                {
                    a=t[i];
                    break;
                }
            }
        
    return a;
        
    }
};