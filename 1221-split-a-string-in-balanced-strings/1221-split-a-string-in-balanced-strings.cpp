class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;
        int l=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
                l++;
            else
                r++;
            if(l==r)
            {    ans++;
            l=0;r=0;
            }
        }
        return ans;
    }
};