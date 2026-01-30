class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        
        // Brute force not working
        
        //int n=arr.size();
        // vector<int>ans(n, -1);
        
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j] > arr[i]){
        //             ans[i] = arr[j];
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        int n = arr.size();
        vector<int>ans(n, -1);
        stack<int>st;
        
        for(int i=0;i< 2*n;i++){
            
            int index = i%n;
            
            while(!st.empty() && arr[st.top()] < arr[index]){
                ans[st.top()] = arr[index];
                st.pop();
            }
            
            if(i<n){
                st.push(index);
                
            }
        }
        
        return ans;
        
    }
};