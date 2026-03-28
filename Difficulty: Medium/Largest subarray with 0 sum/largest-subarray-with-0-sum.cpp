class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        
        // method 1: brute force, giving tle
        // int maxLen = 0;
        // for(int i=0;i<arr.size();i++){
        //     int sum = 0;
        //     for(int j=i;j<arr.size();j++){
        //         sum += arr[j];
                
        //         if(sum == 0){
        //           maxLen = max(maxLen, (j - i + 1)); 
        //         }
        //     }
        // }
        // return maxLen;
        
        unordered_map<int, int> mp; // prefix_sum -> first index
        int sum = 0, maxLen = 0;
    
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
    
            // Case 1: sum becomes 0
            if (sum == 0) {
                maxLen = i + 1;
            }
    
            // Case 2: sum seen before
            if (mp.find(sum) != mp.end()) {
                maxLen = max(maxLen, i - mp[sum]);
            } else {
                mp[sum] = i; // store first occurrence
            }
        }
    
        return maxLen;
    }
};