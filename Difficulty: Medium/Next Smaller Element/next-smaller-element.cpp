class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        
        for(int i=n-1;i>=0;i--){
            
            // remove the element that are >= current element
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            
            // if stack ie empty, no smaller element
            
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            
            // push current element into the stack
            
            st.push(arr[i]);
        }
        
        return ans;
    }
};