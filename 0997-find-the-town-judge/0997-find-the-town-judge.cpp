class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>incoming(n+1,0);
        vector<int>outgoing(n+1,0);
        for(auto it:trust)
        {
            int a=it[0];
            int b=it[1];
            incoming[b]++;
            outgoing[a]++;
        }
        for(int i=1;i<=n;i++)
        {
            if( incoming[i]==n-1 && outgoing[i]==0)
                return i;
        }
        return -1;
    }
};