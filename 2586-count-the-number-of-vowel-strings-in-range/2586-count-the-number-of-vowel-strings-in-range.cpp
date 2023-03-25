class Solution {
public:
    int vowelStrings(vector<string>& word, int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++)
        {
            int n=word[i].size();
            if((word[i][0]=='a' || word[i][0]=='e'||word[i][0]=='i'||word[i][0]=='o'||word[i][0]=='u') &&(word[i][n-1]=='a' || word[i][n-1]=='e'||word[i][n-1]=='i'||word[i][n-1]=='o'||word[i][n-1]=='u'))
                c++;
        }
        return c;
    }
};