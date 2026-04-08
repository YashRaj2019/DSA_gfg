class Solution {
public:

    void dfs(int i, int j, vector<vector<char>>& grid, int n, int m) {
        
        // boundary + water check
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != 'L') {
            return;
        }
        
        grid[i][j] = 'W'; // mark visited
        
        // 8 directions
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        
        for(int k = 0; k < 8; k++) {
            dfs(i + dx[k], j + dy[k], grid, n, m);
        }
    }

    int countIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'L') {
                    dfs(i, j, grid, n, m);
                    islands++;
                }
            }
        }
        return islands;
    }
};