class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>max;
        
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
            max.push_back(sum);
        }
        int n=max.size();
        sort(max.begin(),max.end());
        return max[n-1];
    }
};