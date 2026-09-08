class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        
        int n = adj.size();
        
        vector<int>ans;
        vector<bool>visited(n, false);
        
        queue<int>q;
        
        q.push(0);
        visited[0] = true;
        
        
        while(q.size() > 0){
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(int it : adj[node]){
                if(!visited[it]){
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
        
        return ans;
        
    }
};