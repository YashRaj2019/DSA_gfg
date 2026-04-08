class Solution {
public:
    
    bool check(int i, int j, int n, int m){
        return i >= 0 && j >= 0 && i < n && j < m;
    }
    
    void fill(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int row[4] = {-1, 1, 0, 0};
        int col[4] = {0, 0, 1, -1};
        
        queue<pair<int, int>> q;
        
        // visited + answer
        vector<vector<char>> ans(n, vector<char>(m, 'X'));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        // --- push boundary 'O' ---
        
        // first row
        for(int j = 0; j < m; j++){
            if(grid[0][j] == 'O'){
                q.push({0, j});
                ans[0][j] = 'O';
                visited[0][j] = true;
            }
        }
        
        // last row
        for(int j = 0; j < m; j++){
            if(grid[n-1][j] == 'O'){
                q.push({n-1, j});
                ans[n-1][j] = 'O';
                visited[n-1][j] = true;
            }
        }
        
        // first column
        for(int i = 1; i < n-1; i++){
            if(grid[i][0] == 'O'){
                q.push({i, 0});
                ans[i][0] = 'O';
                visited[i][0] = true;
            }
        }
        
        // last column
        for(int i = 1; i < n-1; i++){
            if(grid[i][m-1] == 'O'){
                q.push({i, m-1});
                ans[i][m-1] = 'O';
                visited[i][m-1] = true;
            }
        }
        
        // --- BFS ---
        while(!q.empty()){
            auto [u, v] = q.front();
            q.pop();
            
            for(int k = 0; k < 4; k++){
                int ni = u + row[k];
                int nj = v + col[k];
                
                if(check(ni, nj, n, m) && !visited[ni][nj] && grid[ni][nj] == 'O'){
                    visited[ni][nj] = true;
                    ans[ni][nj] = 'O';
                    q.push({ni, nj});
                }
            }
        }
        
        // copy back to grid
        grid = ans;
    }
};