class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int v = adj.size();
        vector<int> ans;
        vector<bool> visited(v + 1, false);   // fix
        stack<int> st;
        
        st.push(0); // change to 1 if graph is 1-based
        
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            if(!visited[node]){
                visited[node] = true;
                ans.push_back(node);
                
                for(int i = (int)adj[node].size() - 1; i >= 0; i--){
                    int neighbour = adj[node][i];
                    
                    if(neighbour < visited.size() && !visited[neighbour]){ // extra safety
                        st.push(neighbour);
                    }
                }
            }   
        }
        return ans;
    }
};