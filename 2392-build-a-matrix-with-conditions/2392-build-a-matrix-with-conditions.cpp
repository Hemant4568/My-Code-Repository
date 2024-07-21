class Solution {
public:
    vector<int> topologicalSort(int k, vector<vector<int>>& conditions) {
    vector<int> inDegree(k+1, 0);
    unordered_map<int, vector<int>> adjList;

    for (auto& condition : conditions) {
        adjList[condition[0]].push_back(condition[1]);
        inDegree[condition[1]]++;
    }

    queue<int> q;
    for (int i = 1; i <= k; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> order;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        order.push_back(curr);

        for (int neighbor : adjList[curr]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    if (order.size() != k) {
        return {}; 
    }

    return order;
}
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
         vector<int> rowOrder = topologicalSort(k, rowConditions);
    vector<int> colOrder = topologicalSort(k, colConditions);

    if (rowOrder.empty() || colOrder.empty()) {
        return {};
    }

    vector<int> rowPos(k+1), colPos(k+1);
    for (int i = 0; i < k; i++) {
        rowPos[rowOrder[i]] = i;
        colPos[colOrder[i]] = i;
    }

    vector<vector<int>> matrix(k, vector<int>(k, 0));
    for (int i = 1; i <= k; i++) {
        matrix[rowPos[i]][colPos[i]] = i;
    }

    return matrix;
    }
};