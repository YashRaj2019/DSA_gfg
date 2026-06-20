class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        
        vector<int>ans(arr.size(), 0);
        stack<int> s;
        
        for(int i=arr.size()-1; i >=0; i--){ 
            while(s.size() > 0 && s.top() >= arr[i]){  // remove the elemets which are >= current element elemet
                s.pop();
            }
            
            if(s.empty()){  // if stack is empty, no greater elemet
                ans[i] = -1;
            }
            else{
                ans[i] = s.top();
            }
            
            s.push(arr[i]); // push current elemet into stack
        }
        return ans;
    }
};