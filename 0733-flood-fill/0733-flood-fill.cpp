class Solution {
public:
    void dfs(vector<vector<int>>& image,int row,int col,int val, int color)
    {
        if(row<0 || row>=image.size() || col<0 || col>=image[0].size()||image[row][col]!=val||image[row][col]==color)
            return;
        image[row][col]=color;
        dfs(image,row-1,col,val,color);
        dfs(image,row+1,col,val,color);
        dfs(image,row,col-1,val,color);
        dfs(image,row,col+1,val,color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int val=image[sr][sc];
    dfs(image,sr,sc,val,color);
        return image;
    }
};