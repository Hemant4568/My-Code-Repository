#include<bits/stdc++.h>
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>row(m);
        vector<int>col(n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;}
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(col[j]|| row[i])
                    matrix[i][j]=0;
            }
        }
    }
};