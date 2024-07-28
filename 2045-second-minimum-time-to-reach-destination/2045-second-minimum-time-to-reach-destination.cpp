class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
       vector<vector<int>> adj(n);

        for (const auto& edge : edges) {
            adj[edge[0] - 1].emplace_back(edge[1] - 1);
            adj[edge[1] - 1].emplace_back(edge[0] - 1);
        }

        vector<int> dist1(n, numeric_limits<int>::max());
        vector<int> dist2(n, numeric_limits<int>::max());
        queue<pair<int, int>> q;
        q.push({ 0, 0 });

        for (; !q.empty(); q.pop()) {
            const auto& [d, u] = q.front();
            const bool firstMin = d < dist1[u];
            const bool secondMin = d != dist1[u] && d < dist2[u];

            if (firstMin)
                dist1[u] = d;
            else if (secondMin)
                dist2[u] = d;

            if (firstMin || secondMin)
                for (const int& v : adj[u])
                    q.push({ d + 1, v });
        }

        int d = dist2[n - 1], timeTotal = 0;
        
        while (d--) {
            if ((timeTotal / change) & 1)
                timeTotal += change - timeTotal % change;

            timeTotal += time;
        }

        return timeTotal;
    }
};