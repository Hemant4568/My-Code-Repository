class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.size();
        stack<unordered_map<string, int>> stk;
        stk.push({});
        
        for (int i = 0; i < n; ) {
            if (formula[i] == '(') {
                stk.push({});
                i++;
            } else if (formula[i] == ')') {
                auto topMap = stk.top();
                stk.pop();
                i++;
                int start = i;
                while (i < n && isdigit(formula[i])) i++;
                int multiplier = (i > start) ? stoi(formula.substr(start, i - start)) : 1;
                
                for (auto& p : topMap) {
                    stk.top()[p.first] += p.second * multiplier;
                }
            } else {
                int start = i;
                i++;
                while (i < n && islower(formula[i])) i++;
                string elem = formula.substr(start, i - start);
                
                start = i;
                while (i < n && isdigit(formula[i])) i++;
                int count = (i > start) ? stoi(formula.substr(start, i - start)) : 1;
                
                stk.top()[elem] += count;
            }
        }
        
        map<string, int> sortedMap;
        for (auto& p : stk.top()) {
            sortedMap[p.first] = p.second;
        }
        
        string result;
        for (auto& p : sortedMap) {
            result += p.first;
            if (p.second > 1) result += to_string(p.second);
        }
        
        return result;
    }

};