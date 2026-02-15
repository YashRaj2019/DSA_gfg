// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int n = arr.size();
        int maxRight = -1;
        
        for(int i=n-1;i>=0;i--){
           int current = arr[i];
           arr[i]=maxRight;
           maxRight = max(maxRight, current);
        }
        
        return arr;
    }
};