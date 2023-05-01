class Solution {
public:
    vector<int>find(int n)
    {
        long long ans=1;
        vector<int>answer;
        answer.push_back(1);
        for(int i=1;i<n;i++)
        {
            ans=ans*(n-i);
            ans=ans/i;
            answer.push_back(ans);
        }
        return answer;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++)
        {
            result.push_back(find(i));
        }
        return result;
    }
};