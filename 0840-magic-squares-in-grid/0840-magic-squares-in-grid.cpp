class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid, int r, int c) {
    // Check distinct numbers from 1 to 9
    set<int> uniqueNumbers;
    for (int i = r; i < r + 3; ++i) {
        for (int j = c; j < c + 3; ++j) {
            int num = grid[i][j];
            if (num < 1 || num > 9 || !uniqueNumbers.insert(num).second) {
                return false;
            }
        }
    }

    // Check sums of rows, columns, and diagonals
    int sum = grid[r][c] + grid[r][c+1] + grid[r][c+2]; // Sum of the first row

    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (grid[r+i][c] + grid[r+i][c+1] + grid[r+i][c+2] != sum) {
            return false;
        }
    }

    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (grid[r][c+j] + grid[r+1][c+j] + grid[r+2][c+j] != sum) {
            return false;
        }
    }

    // Check diagonals
    if (grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2] != sum) {
        return false;
    }
    if (grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c] != sum) {
        return false;
    }

    return true;
}
    int numMagicSquaresInside(vector<vector<int>>& grid) {
         int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    // Loop over every 3x3 subgrid
    for (int r = 0; r <= rows - 3; ++r) {
        for (int c = 0; c <= cols - 3; ++c) {
            if (isMagicSquare(grid, r, c)) {
                ++count;
            }
        }
    }

    return count;
    }
};