class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
          int m = grid2.size(), n = grid2[0].size();
        int count = 0;

        // DFS function to mark all parts of the island as visited and check if it's a sub-island
        function<bool(int, int)> dfs = [&](int x, int y) -> bool {
            // Check for out of bounds or water cells
            if (x < 0 || x >= m || y < 0 || y >= n || grid2[x][y] == 0)
                return true;
            
            // Check if current cell in grid2 is not a sub-island (i.e., grid1 doesn't have land here)
            if (grid1[x][y] == 0)
                return false;

            // Mark the cell as visited by setting it to 0
            grid2[x][y] = 0;

            // Continue DFS in all four directions
            bool isSubIsland = true;
            isSubIsland &= dfs(x + 1, y);
            isSubIsland &= dfs(x - 1, y);
            isSubIsland &= dfs(x, y + 1);
            isSubIsland &= dfs(x, y - 1);

            return isSubIsland;
        };

        // Traverse each cell in grid2
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // If we find a land cell in grid2, we check if it's a sub-island
                if (grid2[i][j] == 1) {
                    // If the whole island is a sub-island, we increment the count
                    if (dfs(i, j)) {
                        ++count;
                    }
                }
            }
        }

        return count;
    }
};