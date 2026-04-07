class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dist(n, vector<int>(m, -1));
        
        queue<pair<int, int>>q;
        
        // step 1: push all 1's in queue
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    q.push({i, j});
                    dist[i][j] = 0; //distance to itself
                }
            }
        }
        
        // 4 directions
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        // Step 2: BFS
        while(!q.empty()){
            auto [i, j] = q.front();
            q.pop();
            
            for(int k = 0; k < 4; k++){
                int ni = i + dx[k];
                int nj = j + dy[k];
                
                if(ni >= 0 && ni < n && nj >= 0 && nj < m && dist[ni][nj] == -1){
                    dist[ni][nj] = dist[i][j] + 1;
                    q.push({ni, nj});
                }
            }
        }
        
        return dist;
        
    }
};