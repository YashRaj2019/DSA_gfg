class Solution {
  public:
  
    void dfsHelper(int node, vector<vector<int>>& adj, vector<bool>&visited, vector<int>&ans){
        
        visited[node] = true;
        ans.push_back(node);
        
        
        // visit neighbour in given order
        for(int it : adj[node]){
            if(!visited[it]){
                dfsHelper(it, adj, visited, ans);
            }
        }
        
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        
        int n = adj.size();
        
        vector<int>ans;
        vector<bool>visited(n, false);
        
        dfsHelper(0, adj, visited, ans);
        
        return ans;
        
    }
};