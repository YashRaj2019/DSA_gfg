class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
        
        // Brute Force
        int n = arr.size();
        // vector<int>ans(n,0);
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n-i;j++){
                
        //         int num = INT_MAX;
                
        //         for(int k=j; k<i+j+1; k++){
                    
        //             num = min(num, arr[k]);
        //         }
                
        //         ans[i] = max(num, ans[i]);
                
        //     }
        // }
        
        // return ans;
        
        
        vector<int>ans(n,0);
        stack<int>st;
        
        for(int i=0;i<n;i++){
        
            while(!st.empty() && arr[st.top()]>arr[i]){
                int index = st.top();
                st.pop();
                
                // i= nsr
                // stack ke andar jo index, nsl
                
                if(st.empty()){
                    int range = i;
                    ans[range-1] = max(ans[range-1], arr[index]);
                }
                
                else{
                    int range = i-st.top()-1;
                    ans[range-1] = max(ans[range-1], arr[index]);
                }
            }
            
            st.push(i);
        }
        
        // vacant the stack
        
        while(!st.empty()){
            int index = st.top();
            st.pop();
                
            // i= nsr
            // stack ke andar jo index, nsl
                
            if(st.empty()){
                int range = n;
                ans[range-1] = max(ans[range-1], arr[index]);
            }
                
            else{
                int range = n-st.top()-1;
                ans[range-1] = max(ans[range-1], arr[index]);
            }
        }
        
        // update the value of ans array
        
        for(int i=n-2; i>=0; i--){
            ans[i] = max(ans[i], ans[i+1]);
        }
        
        return ans;
    }
};