// class Solution {
//   public:
  
//     void dfsHelper(int node, vector<vector<int>>&adj, vector<bool>&visited, vector<int>&ans){
        
//         visited[node] = true;
//         ans.push_back(node);
        
//         for(int it : adj[node]){
//             if(!visited[it]){
//                 dfsHelper(it, adj, visited, ans);
//             }
//         }
//     }
    
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
        
//         int n = adj.size();
        
//         vector<int>ans;
//         vector<bool>visited(n, false);
        
//         dfsHelper(0, adj, visited, ans);
        
//         return ans;
        
//     }
// };



class Solution {
  public:
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        
        vector<int>ans;
        vector<bool>visited(n, false);
        
        stack<int>s;
        
        s.push(0);
        
        while(s.size() > 0){
            
            int node = s.top();
            s.pop();
            
            if(visited[node]){
                continue;
            }
            
            visited[node] = true;
            ans.push_back(node);
            
            for(int i=adj[node].size()-1; i >= 0; i--){
                if(!visited[adj[node][i]]){
                    s.push(adj[node][i]);
                }
                
            }
        }
        
        return ans;
    }
};