class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp,mp1;
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i])==0 && mp1.count(t[i])==0)
            {
                mp[s[i]]=t[i];
                mp1[t[i]]=s[i];
            }
            else
            {
                if(mp[s[i]]!=t[i] || mp1[t[i]]!=s[i])
                    return 0;
            }
        }
        return 1;
    }
};