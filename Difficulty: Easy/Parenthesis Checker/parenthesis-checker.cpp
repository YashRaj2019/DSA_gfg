class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int n = s.size();
        stack<char>st;
        
        for(int i=0;i<n;i++){
            char ch = s[i];
            
            // of opening bracket, push
            
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            
            // if stack is empty, no matching opening bracket
            
           else{
                if(st.empty()){
                return false;
                }
           
            
            char top = st.top(); 
            st.pop();
            
            // check if barckets match
            
            if((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                 (ch == ']' && top != '[')){
                     return false;
                 } 
            }
        }
        
        // stack should be empty at end
        
        if(st.empty()){
            return true;
        }
        
        return false;
        
    }
};