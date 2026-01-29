// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        
        for(int i=0;i<arr.size();i++){
            
            // stack can be empty
            if(st.empty()){
                st.push(arr[i]);
            }
            
            // non negative number
            
            else if(arr[i]>=0){
                // element present in stack is non negative
                
                if(st.top()>=0){
                   st.push(arr[i]); 
                }
                
                // element present in stack is negative
                
                else{
                    st.pop();
                }
            }
            
            // negative number
            else{
                 // element present in stack is negative
                if(st.top() < 0){
                    st.push(arr[i]);
                }
                
                // element present in stack is non negative
                else{
                    st.pop();
                }
            }
        }
        
        vector<int>ans(st.size());
        
        int i = st.size()-1;
        
        while(!st.empty()){
            ans[i] = st.top();
            i--;
            st.pop();
        }
        return ans;
    }
};