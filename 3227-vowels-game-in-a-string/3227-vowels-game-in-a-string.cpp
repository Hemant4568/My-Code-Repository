class Solution {
public:
    bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


    bool doesAliceWin(string s) {
        int n = s.length();
    int vowelCount = 0;
    unordered_set<int> oddVowelSubstrings;
    unordered_set<int> evenVowelSubstrings;
    
    evenVowelSubstrings.insert(0);

    for (int i = 0; i < n; ++i) {
        if (isVowel(s[i])) {
            vowelCount++;
        }

        if (vowelCount % 2 == 0) {
            evenVowelSubstrings.insert(i + 1);
        } else {
            oddVowelSubstrings.insert(i + 1);
        }
    }
    return !oddVowelSubstrings.empty();
    }
};