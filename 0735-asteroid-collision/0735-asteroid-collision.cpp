class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int>ans;
        stack<int>st;
        for(int it:arr)
        {
            bool flag=0;
            while(!st.empty()&& st.top()>0 && it<0)
            {
                if(st.top()+it<0)
                    st.pop();
                else if(st.top()+it==0)
                {
                    st.pop();
                    flag=1;
                    break;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
                st.push(it);
        }
        while(st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};