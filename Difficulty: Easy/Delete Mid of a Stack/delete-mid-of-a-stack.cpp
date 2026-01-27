class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        
        
        stack<int>temp;
        int count = s.size() / 2;
        
        while(count--){
            temp.push(s.top());
            s.pop(); // for deletion of element abobe required element
        }
        
        s.pop(); // delete the given / required element
        
        
        while(temp.size()){
            s.push(temp.top());
            temp.pop();
        }
    }
};