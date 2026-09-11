class Solution {
  public:
  
   void dfs(int node, vector<vector<int>>&adj, vector<bool>&visited, stack<int>&s){
       
       visited[node] = true;
       
       for(int it : adj[node]){
           if(!visited[it]){
               dfs(it, adj, visited, s);
           }
       }
       
       s.push(node);
   }
   
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>>adj(V);
        
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool>visited(V, false);
        stack<int>s;
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                dfs(i, adj, visited, s);
            }
        }
        
        vector<int>ans;
        
        while(s.size() > 0){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};