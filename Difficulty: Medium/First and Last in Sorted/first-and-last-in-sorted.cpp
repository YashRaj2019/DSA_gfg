class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        
        vector<int>ans;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == x){
                ans.push_back(i);
                break;
            }
        }
        
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i] == x){
                ans.push_back(i);
                break;
            }
        }
        
        if(ans.size() == 0){
            return {-1, -1};
        }
        return ans;
    }
};