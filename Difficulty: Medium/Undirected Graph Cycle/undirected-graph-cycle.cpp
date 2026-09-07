class Solution {
  public:
  
    bool dfs(int node, int parent, vector<vector<int>>& edges, vector<bool>&visited){
        visited[node] = true;
        
        for(int x : edges[node]){
            if(!visited[x]){
                if(dfs(x, node, edges, visited)){
                    return true;
                }
            }
            
            // already visited and not the parent
            else if(x != parent){
                return true;
            }
        }
        
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<vector<int>>adj(V);
        
        // create adjacency list
        
        for(auto edge : edges){
            
            int u = edge[0];
            int v = edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }    
            vector<bool>visited(V, false);
            
            // Graph can have multiple components
            for(int i=0; i < V; i++){
                if(!visited[i]){
                    if(dfs(i, -1, adj, visited)){
                        return true;
                    }
                }
            }
        return false;
    }
};