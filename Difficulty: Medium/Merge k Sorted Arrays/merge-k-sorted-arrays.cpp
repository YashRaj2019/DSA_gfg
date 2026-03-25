class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        
        int n = mat.size();
        
        // min heap: {value, {row, col}}
        priority_queue<
            pair<int, pair<int,int>>, 
            vector<pair<int, pair<int,int>>>, 
            greater<pair<int, pair<int,int>>>
        > p;
        
        // Step 1: Push first element of each row
        for (int i = 0; i < n; i++) {
            if (mat[i].size() > 0) {
                p.push({mat[i][0], {i, 0}});
            }
        }
        
        vector<int> ans;
        
        // Step 2: Process heap
        while (!p.empty()) {
            auto temp = p.top();
            p.pop();
            
            int value = temp.first;
            int row = temp.second.first;
            int col = temp.second.second;
            
            ans.push_back(value);
            
            // Push next element from same row
            if (col + 1 < mat[row].size()) {
                p.push({mat[row][col + 1], {row, col + 1}});
            }
        }
        
        return ans;
    }
};