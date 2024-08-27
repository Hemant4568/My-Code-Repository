struct Compare {
    bool operator()(const pair<int, double>& p1, const pair<int, double>& p2) {
        return p1.second < p2.second;  // Max-heap based on probabilities
    }
};
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
         vector<vector<pair<int, double>>> graph(n);
        for (int i = 0; i < edges.size(); ++i) {
            int a = edges[i][0], b = edges[i][1];
            double prob = succProb[i];
            graph[a].emplace_back(b, prob);
            graph[b].emplace_back(a, prob);
        }

        priority_queue<pair<int, double>, vector<pair<int, double>>, Compare> pq;
        vector<double> probabilities(n, 0.0);
        probabilities[start] = 1.0;

        pq.emplace(start, 1.0);

        // Step 4: Process the graph
        while (!pq.empty()) {
            auto [node, prob] = pq.top();
            pq.pop();

            // If we've reached the end node, return the probability
            if (node == end) {
                return prob;
            }

            // Explore neighbors
            for (auto& [neighbor, edgeProb] : graph[node]) {
                double newProb = prob * edgeProb;
                if (newProb > probabilities[neighbor]) {
                    probabilities[neighbor] = newProb;
                    pq.emplace(neighbor, newProb);
                }
            }
        }

        // If the end node is not reachable, return 0
        return 0.0;
    }
};