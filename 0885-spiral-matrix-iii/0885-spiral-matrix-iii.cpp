class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
         vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<vector<int>> result;
    
    int totalCells = rows * cols;
    int directionIndex = 0;
    int steps = 1;  
    int r = rStart, c = cStart;

    result.push_back({r, c});
    
    while (result.size() < totalCells) {
        for (int i = 0; i < steps; ++i) {
            r += directions[directionIndex][0];
            c += directions[directionIndex][1];
            if (r >= 0 && r < rows && c >= 0 && c < cols) {
                result.push_back({r, c});
            }
        }
        
        directionIndex = (directionIndex + 1) % 4;

        if (directionIndex == 0 || directionIndex == 2) {
            steps++;
        }
    }

    return result;
    }
};