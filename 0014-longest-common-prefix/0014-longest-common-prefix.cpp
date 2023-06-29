class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string s;
        for(int i=0;i<strs[0].size();i++)
        {
           if(strs[0][i]==strs[n-1][i])
               s+=strs[0][i];
            else
                break;
        }
        return s;
    }
};