class Solution {
public:
    
    bool DFS(vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &path, int node){
        
        visited[node] = true;
        path[node] = true;
        
        for(int adjNode : adj[node]){
            
            if(!visited[adjNode]){
                if(DFS(adj, visited, path, adjNode)){
                    return true;
                }
            }
            else if(path[adjNode]){
                return true;
            }
        }
        
        path[node] = false;
        return false;
    }
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        // 🔥 Step 1: convert edge list → adjacency list
        vector<vector<int>> adj(V);
        
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v); // directed graph
        }
        
        vector<bool> visited(V, false);
        vector<bool> path(V, false);
        
        // 🔥 Step 2: DFS
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(DFS(adj, visited, path, i)){
                    return true;
                }
            }
        }
        
        return false;
    }
};