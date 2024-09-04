class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int dir = 0;  // Start facing North
    
    // Convert obstacles to a set of strings for quick lookup
    unordered_set<string> obstacleSet;
    for (auto& obs : obstacles) {
        obstacleSet.insert(to_string(obs[0]) + "," + to_string(obs[1]));
    }
    
    int x = 0, y = 0;  // Starting position
    int maxDistSquared = 0;

    for (int command : commands) {
        if (command == -2) {
            // Turn left
            dir = (dir + 3) % 4;
        } else if (command == -1) {
            // Turn right
            dir = (dir + 1) % 4;
        } else {
            // Move forward `command` steps
            for (int step = 0; step < command; step++) {
                int nextX = x + directions[dir].first;
                int nextY = y + directions[dir].second;
                
                string nextPos = to_string(nextX) + "," + to_string(nextY);
                if (obstacleSet.find(nextPos) == obstacleSet.end()) {
                    // No obstacle, move to the next position
                    x = nextX;
                    y = nextY;
                    maxDistSquared = max(maxDistSquared, x * x + y * y);
                } else {
                    // Hit an obstacle, stop
                    break;
                }
            }
        }
    }

    return maxDistSquared;
    }
};