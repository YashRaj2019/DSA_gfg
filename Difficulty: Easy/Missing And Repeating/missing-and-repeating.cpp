class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int>ans(n+1, 0);
        for(int i=0; i<arr.size(); i++){
            ans[arr[i]]++;
        }
        

        int repeated = -1;
        int missing = -1;
        
        for(int i=1; i<=n; i++){
            if(ans[i] == 2){
                repeated = i;
            }
            
            if(ans[i] == 0){
                missing = i;
            }
        }
        
        return {repeated, missing};
    }
};