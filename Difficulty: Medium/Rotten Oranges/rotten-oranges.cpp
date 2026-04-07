class Solution {
  public:
  
    // check i,j is present inside the grid or not
    bool check(int i, int j, int row, int col){
        return i > -1 && i < row && j > -1 && j < col;
    }
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        
        int n = mat.size(); // row
        int m = mat[0].size(); // col
        
        int GoodOranges = 0;
        // queue will consist 3 things, row, column and timer
        
        queue<pair<pair<int, int>, int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // count good oranges
                if(mat[i][j]==1){
                    GoodOranges++;
                }
                //push rotten oranges into queue
                else if(mat[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        
        int i, j, timer = 0;
        while(!q.empty()){
            
            i = q.front().first.first;
            j = q.front().first.second;
            timer = q.front().second;
            
            q.pop();
            
            if(check(i-1, j, n, m) && mat[i-1][j]==1){ // up (i-1, j)
                mat[i-1][j]=0;
                GoodOranges--;
                q.push({{i-1, j}, timer+1});
            }
            
            if(check(i+1, j, n, m) && mat[i+1][j]==1){ // down (i+1, j)
                mat[i+1][j]=0;
                GoodOranges--;
                q.push({{i+1, j}, timer+1});
            }
            if(check(i, j-1, n, m) && mat[i][j-1]==1){ // left (i, j-1)
                mat[i][j-1]=0;
                GoodOranges--;
                q.push({{i, j-1}, timer+1});
            }
            if(check(i, j+1, n, m) && mat[i][j+1]==1){ // up (i, j+1)
                mat[i][j+1]=0;
                GoodOranges--;
                q.push({{i, j+1}, timer+1});
            }
        }
        
        if(GoodOranges){
            return -1;
        }
        
        else{
            return timer;
        }
        
        
        
    }
};