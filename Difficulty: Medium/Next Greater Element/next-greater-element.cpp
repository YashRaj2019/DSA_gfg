class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n, -1);
        stack<int>st;
        
        
        // brute force
        
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j]>arr[i]){
        //             ans[i] = arr[j];
        //             break;
        //         }
        //     }
        // }
        
       // return ans;
       
       // optimal solution
       
       for(int i=0;i<n;i++){
           while(!st.empty() && arr[st.top()] < arr[i]){
               ans[st.top()] = arr[i];
               st.pop();
           }
           
           st.push(i);
       }
       
       return ans;
    }
};