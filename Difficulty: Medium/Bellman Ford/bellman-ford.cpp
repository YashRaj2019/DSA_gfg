class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>dist(V, 1e8);
        dist[src] = 0;
        
        // relax all the edges V-1 times;
        
        for(int i=0; i<V-1; i++){
            for(auto e : edges){
                int u = e[0];
                int v = e[1];
                int w = e[2];
                
                if(dist[u] != 1e8 && dist[u] + w < dist[v]){
                    dist[v] = w + dist[u];
                }
                
            }
        }
        
        // check for negative edges cycle
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
                
            if(dist[u] != 1e8 && dist[u] + w < dist[v]){
                return {-1};
            }
                
        }
        return dist;
    }
};
