#include<bits/stdc++.h>
class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
int n = s.size();
    int ans = 0;
    std::unordered_set<char> seen;
    int left = 0;
    
    for (int right = 0; right < n; ++right) {
        // Move the left pointer to the right until there are no repeating characters
        while (seen.find(s[right]) != seen.end()) {
            seen.erase(s[left]);
            ++left;
        }
        // Update the longest substring length
        ans = std::max(ans, right - left + 1);
        // Add the current character to the set
        seen.insert(s[right]);
    }
    
    return ans;
    }
};