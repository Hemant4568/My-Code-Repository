class Solution {
public:
    vector<int> beautifulArray(int n) {
        if(n==1)
            return {1};
        vector<int>temp=beautifulArray(n-1);
        vector<int>ans;
        for(int i:temp)
            if(2*i-1<=n)
                ans.push_back(2*i-1);
        for(int i:temp)
            if(2*i<=n)
                ans.push_back(2*i);
        return ans;
    }
};