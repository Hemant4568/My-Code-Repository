class Solution {
public:
    vector<std::vector<int>> getEmpty2DVector() {
    return std::vector<std::vector<int>>();  // Return an empty 2D vector
}
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size())
            return getEmpty2DVector();
        vector<vector<int>>ans(m, vector<int>(n));
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                ans[i][j]=original[i * n + j];
            }
        }
        return ans;
    }
};