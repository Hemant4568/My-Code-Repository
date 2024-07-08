class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans=s; 
       rotate(ans.begin(),ans.begin()+(k%s.size()),ans.end());
        return ans;
    }
};