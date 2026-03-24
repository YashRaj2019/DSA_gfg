class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        
        vector<pair<int, pair<int, int>>>temp;
        for(int i=0;i<mat.size();i++){
            temp.push_back(make_pair(mat[i][0], make_pair(i, 0)));
        }
        
        
        // create min heap and put data(value), row, col inside it
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>p(temp.begin(), temp.end());
        
        int ans;
        pair<int, pair<int, int>>Element;
        int i,j;
        
        while(k--){
            Element = p.top();
            p.pop();
            ans = Element.first; // value
            i = Element.second.first; // row number
            j = Element.second.second; // col number
            
            if(j+1 < mat[0].size()){
                p.push(make_pair(mat[i][j+1], make_pair(i, j+1)));
            }
        }
        
        return ans;
    }
};
