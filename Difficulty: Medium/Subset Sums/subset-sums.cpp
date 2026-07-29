class Solution {
  public:
  
  
    void solve(int index, int sum, vector<int>& ans, vector<int> &arr){
        
        if(index == arr.size()){
            ans.push_back(sum);
            return;
        }
        
        // take the curreent element
        solve(index+1, sum + arr[index], ans, arr);
        
        // dont't take the curreent element
        solve(index+1, sum, ans, arr);
    }
    
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        solve(0, 0, ans, arr);
        return ans;
    }
};