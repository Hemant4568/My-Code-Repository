class Solution {
public:
    string reverseWords(string s) {
        int j=0;
        for(int i=0;i<=s.size();i++)
        {
            if(i==s.size() || s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        return s;
    }
};