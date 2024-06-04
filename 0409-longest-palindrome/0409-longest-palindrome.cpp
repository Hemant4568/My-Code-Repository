class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(char i:s)
        {
            mp[i]++;
        }
        int a=0;
        bool flag=false;
        for(auto it:mp)
        {
            if(it.second%2==0)
                a+=it.second;
            else
            {
                a+=it.second-1;
                flag=true;
            }
        }
        if(flag==true)
            a+=1;
        return a;
    }
};