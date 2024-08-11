class Solution {
public:
    bool isInBounds(int x, int y, int m, int n) {
        return x >= 0 && x < m && y >= 0 && y < n;
    }

    // DFS to mark all connected land cells
    void dfs(vector<vector<int>>& grid, int x, int y) {
        int m = grid.size();
        int n = grid[0].size();
        grid[x][y] = 0;  // Mark the cell as visited by turning it into water

        // Possible directions: up, down, left, right
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        for (auto dir : directions) {
            int newX = x + dir.first;
            int newY = y + dir.second;
            if (isInBounds(newX, newY, m, n) && grid[newX][newY] == 1) {
                dfs(grid, newX, newY);
            }
        }
    }
    int countIslands(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int islands = 0;
        vector<vector<int>> gridCopy = grid;  // Create a copy to preserve the original grid
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (gridCopy[i][j] == 1) {
                    ++islands;
                    dfs(gridCopy, i, j);
                }
            }
        }
        
        return islands;
    }

    int minDays(vector<vector<int>>& grid) {
        if (countIslands(grid) != 1) {
            return 0;
        }
        
        int m = grid.size();
        int n = grid[0].size();

        // Try removing each land cell and check if the grid becomes disconnected
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;  // Temporarily remove this land cell
                    if (countIslands(grid) != 1) {
                        return 1;  // The grid is disconnected by removing this single cell
                    }
                    grid[i][j] = 1;  // Restore the cell
                }
            }
        }
        
        // If no single cell can disconnect the grid, return 2
        return 2;
    }
};