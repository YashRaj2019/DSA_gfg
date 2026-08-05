class Solution {
  public:
  
    vector<int> solve(vector<int>& arr){
        
        vector<int>ans;
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i] == 0){
                ans.push_back(0);
            }
        }
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i] == 1){
                ans.push_back(1);
            }
        }
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i] == 2){
                ans.push_back(2);
            }
        }   
           
        
        return ans;
    }
    
    
    void sort012(vector<int>& arr) {
        // code here
        arr = solve(arr);
    }
};