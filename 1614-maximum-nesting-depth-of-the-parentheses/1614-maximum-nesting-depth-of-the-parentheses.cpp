#include<bits/stdc++.h>
class Solution {
public:
    int maxDepth(string s) {
            int mx=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            if(s[i]==')')
                st.pop();
            if(mx<st.size())
                mx=st.size();
        }
        return mx;
    }
};