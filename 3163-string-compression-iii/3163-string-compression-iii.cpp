class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int c=1;
        char s=word[0];
        for(int i=0;i<word.length();i++)
        {
            while(word[i]==word[i+1] && c<9)
            {
                c++;
                i++;
            }
            comp+=to_string(c)+word[i];
            c=1;
        }
        return comp;
    }
};