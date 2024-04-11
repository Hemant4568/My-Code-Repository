class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string ans="";
        for(auto it:num)
        {
            while(!st.empty() && k>0 && st.top()>it)
            {
                st.pop();
                k--;
            }
            st.push(it);
        }
        while(!st.empty() && k>0)
        {
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());

        int i=0;
        while(i<ans.size() && ans[i]=='0')
            i++;
     return (ans.substr(i) == "") ? "0" : ans.substr(i);

    }
};