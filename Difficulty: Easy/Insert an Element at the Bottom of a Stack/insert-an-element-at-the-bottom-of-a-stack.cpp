// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        
       int n = st.size();
       stack<int>s;
       for(int i=0;i<n;i++){
           s.push(st.top());
           st.pop();
       }
       
       st.push(x);
       
       int i=0;
       
       for(int i=0;i<n;i++){
           st.push(s.top());
           s.pop();
       }
       
       return st;
        
        
    }
};