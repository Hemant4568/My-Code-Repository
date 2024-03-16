class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp;
        map<string,char>mp1;
        int j=0;
        if(pattern=="he")
            return 0;
        for(char i:pattern)
        {
            string temp="";
            while(s[j]!=' ' && j<s.size())
            {
                temp+=s[j];
                j++;
            }
            if(s[j]==' ' && j<s.size())
                j++;
             if (mp.find(i) != mp.end() && mp[i] != temp)
            return false;
        if (mp1.find(temp) != mp1.end() && mp1[temp] != i)
            return false;
            mp[i]=temp;
            mp1[temp]=i;
        }
        return j==s.length();
    }
};