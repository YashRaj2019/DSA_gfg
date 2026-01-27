// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s) {
    // Code here
    stack<int>temp;
    bool result = true;
    
    // if stack size is odd, remove the top element
    
    if(s.size() % 2 == 1){
        temp.push(s.top());
        s.pop();
    }
    
    // check pairs
    
    while(!s.empty()){
        int first = s.top();
        s.pop();
        int second = s.top();
        s.pop();
        
        if(abs(first - second) != 1){
            return false;
        }
        
        // store element to restore later
        
        temp.push(first);
        temp.push(second);
        
    }
    
    // Restore original stack
    
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    
    return result;
    
}