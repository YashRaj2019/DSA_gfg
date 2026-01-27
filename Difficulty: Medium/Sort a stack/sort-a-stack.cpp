class Solution {
  public:
  
  
  // helper function to insert the element in srted order
  
    void insertSorted(stack<int>&st, int x){
        if(st.empty() || st.top() <= x){
            st.push(x);
            return;
        }
        
        int temp = st.top();
        st.pop();
        
        insertSorted(st, x);
        
        st.push(temp);
    }
    
    
    
    void sortStack(stack<int> &st) {
        // code here
        
        if(st.empty()){
            return;
        }
        
        int x = st.top(); // take top element
        
        st.pop();
        
        sortStack(st);
        
        insertSorted(st, x);
        
        
    }
};
