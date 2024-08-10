class Solution {
public:
    
void dfs(vector<vector<int>>& expandedGrid, int x, int y) {
    int n = expandedGrid.size();
    if (x < 0 || x >= n || y < 0 || y >= n || expandedGrid[x][y] == 1) {
        return; // Out of bounds or already visited
    }

    expandedGrid[x][y] = 1; // Mark as visited

    // Explore all 4 directions
    dfs(expandedGrid, x + 1, y);
    dfs(expandedGrid, x - 1, y);
    dfs(expandedGrid, x, y + 1);
    dfs(expandedGrid, x, y - 1);
}

    int regionsBySlashes(vector<string>& grid) {
         int n = grid.size();
    vector<vector<int>> expandedGrid(3 * n, vector<int>(3 * n, 0));

    // Expand the grid
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '/') {
                expandedGrid[3 * i][3 * j + 2] = 1;
                expandedGrid[3 * i + 1][3 * j + 1] = 1;
                expandedGrid[3 * i + 2][3 * j] = 1;
            } else if (grid[i][j] == '\\') {
                expandedGrid[3 * i][3 * j] = 1;
                expandedGrid[3 * i + 1][3 * j + 1] = 1;
                expandedGrid[3 * i + 2][3 * j + 2] = 1;
            }
        }
    }

    int regions = 0;
    // Count regions using DFS
    for (int i = 0; i < 3 * n; ++i) {
        for (int j = 0; j < 3 * n; ++j) {
            if (expandedGrid[i][j] == 0) {
                dfs(expandedGrid, i, j);
                regions++;
            }
        }
    }

    return regions;
    }
};