class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0;
        set<char>vowels={'a','e','i','o','u'};
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(vowels.find(s[i])!=vowels.end())
                c++;
        }
        res=c;
        for(int i=k;i<s.size();i++)
        {
            if(vowels.find(s[i-k])!=vowels.end())
                c--;
            if(vowels.find(s[i])!=vowels.end())
                c++;
            res=max(res,c);
        }
        return res;
    }
};