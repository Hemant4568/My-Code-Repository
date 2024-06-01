class Solution {
public:
    int numberOfSpecialChars(string word) {
         set<char> s;
    
    for (char it : word) {
        s.insert(it);
    }
       map<char, int> letterCounts;

    for (char ch : s) {
        if (isalpha(ch)) {
            char lowercase = tolower(ch);
            letterCounts[lowercase]++;
        }
    }
        int c=0;
        for(auto it:letterCounts)
        {
           if(it.second>1)
               c++;
        }
    
    return c;

    }
};
 