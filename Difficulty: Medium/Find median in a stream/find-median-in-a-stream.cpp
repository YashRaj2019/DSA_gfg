class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        priority_queue<int>left; // max heap
        priority_queue<int, vector<int>, greater<int>>right; //min heap
        
        vector<double>ans;
        
        for(int i=0;i<arr.size();i++){
            
            int x = arr[i];
            
            // step 1 : insert
            
            if(left.empty() || x <= left.top()){
                left.push(x);
            }
            else{
                right.push(x);
            }
            
            // step 2 : balance heap
            
            if(left.size() > right.size()+1){
                right.push(left.top());
                left.pop();
            }
            
            else if(right.size() > left.size()){
                left.push(right.top());
                right.pop();
            }
            
            // find median
            
            if(left.size() == right.size()){
                ans.push_back((left.top() + right.top()) /2.0);
            }
            else{
                ans.push_back(left.top());
            }
        }
        
        return ans;
    }
};
