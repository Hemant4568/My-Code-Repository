class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
    map<string, char> mp1;
    istringstream iss(s);
    string word;
    int j = 0;

    for (char i : pattern) {
        if (!(iss >> word)) 
            return false;

        if (mp.find(i) != mp.end() && mp[i] != word)
            return false;
        
        if (mp1.find(word) != mp1.end() && mp1[word] != i)
            return false;
        
        mp[i] = word;
        mp1[word] = i;
    }

    return !(iss >> word);
    }
};