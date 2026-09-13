class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int, int>>> adj(V);
        
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
            vector<int>dist(V, INT_MAX);
            
            // priority_queue<int>pq; //max heap
            // priority_queue<int, vector<int>, greater<int> >pq; // min heap
            
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> >pq;
            // <dist[u], u>
            
        dist[src] = 0;
        pq.push({0, src});
        
        while(pq.size() > 0){
            
            int d = pq.top().first;
            int node = pq.top().second;
            
            pq.pop();
            
            if( d > dist[node]){
                continue;
            }
            
            for(auto it : adj[node]){
                int next = it.first;
                int weight = it.second;
                
                if(d + weight < dist[next]){
                    dist[next] = d + weight;
                    
                    pq.push({dist[next], next});
                }
            }
        }
            
        return dist;    
    }
};