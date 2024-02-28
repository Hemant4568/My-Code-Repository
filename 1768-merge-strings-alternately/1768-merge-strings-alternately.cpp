class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string res;
        if(n>m)
        {
            for(int i=0;i<n;i++)
            {
                res.push_back(word1[i]);
                if(m>i)
                    res.push_back(word2[i]);
            }
        }
        else
        {
             for(int i=0;i<m;i++)
            {
                 if(n>i)
                res.push_back(word1[i]);
                 res.push_back(word2[i]);
            }
        }
        return res;
    }
};