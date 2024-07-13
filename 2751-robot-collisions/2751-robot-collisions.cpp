class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
    vector<tuple<int, int, char, int>> robots; 
    
    for (int i = 0; i < n; ++i) {
        robots.push_back({positions[i], healths[i], directions[i], i});
    }
    
    sort(robots.begin(), robots.end());
    
    stack<tuple<int, int, char, int>> stk; 
    vector<int> remaining_health(n, -1);
    
    for (auto& robot : robots) {
        int pos = get<0>(robot);
        int health = get<1>(robot);
        char direction = get<2>(robot);
        int index = get<3>(robot);
        
        if (direction == 'R') {
            stk.push(robot);
        } else {
            while (!stk.empty() && health > 0) {
                auto right_robot = stk.top();
                int right_pos = get<0>(right_robot);
                int right_health = get<1>(right_robot);
                char right_direction = get<2>(right_robot);
                int right_index = get<3>(right_robot);
                
                if (right_direction == 'R') {
                    if (right_health > health) {
                        stk.pop();
                        get<1>(right_robot) -= 1; 
                        stk.push(right_robot); 
                        health = 0;
                    } else if (right_health < health) {
                        stk.pop();
                        health -= 1;
                    } else {
                        stk.pop();
                        health = 0;
                    }
                }
            }
            if (health > 0) {
                remaining_health[index] = health;
            }
        }
    }
    
    while (!stk.empty()) {
        auto right_robot = stk.top();
        stk.pop();
        int right_index = get<3>(right_robot);
        remaining_health[right_index] = get<1>(right_robot);
    }
    
    vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (remaining_health[i] != -1) {
            result.push_back(remaining_health[i]);
        }
    }
    
    return result;
    }
};