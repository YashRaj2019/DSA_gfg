class Solution {
public:

    bool DetectCycle(vector<vector<int>>& adj, int node, int parent, vector<bool>& visited) {
        visited[node] = true;

        for (auto neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (DetectCycle(adj, neighbor, node, visited)) {
                    return true;
                }
            }
            else if (neighbor != parent) {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        // Step 1: Build adjacency list
        vector<vector<int>> adj(V);

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u); // undirected graph
        }

        // Step 2: DFS
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (DetectCycle(adj, i, -1, visited)) {
                    return true;
                }
            }
        }

        return false;
    }
};





