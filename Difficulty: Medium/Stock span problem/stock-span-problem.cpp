class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        vector<int>ans(n);
        stack<int>st;
        
        for(int i=0;i<n;i++){
           while(!st.empty() && arr[i] >= arr[st.top()]){
               st.pop();
           } 
           
           if(st.empty()){
               ans[i] = i+1;
           }
           
           else{
               ans[i] = i-st.top();
           }
           
           st.push(i);
        }
        
        
        return ans;
    }
};