class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;
    
    for (string& str : strs) {
        string sortedstr = str;
        sort(sortedstr.begin(), sortedstr.end()); 
        mp[sortedstr].push_back(str);
    }
    
    vector<vector<string>> result;
    for (auto& it : mp) {
        result.push_back(it.second);
    }
    
    return result;
    }
};