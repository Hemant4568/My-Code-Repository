class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
       int x=0,y=m-1;
        while(x<n&& y>=0)
        {
            int a=matrix[x][y];
            if(a==target)
                return 1;
            else if(a<target)
                x++;
            else
                y--;
        }
        return 0;
    }
};