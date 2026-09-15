// class Solution {
//   public:
  
//     int cost(int n, vector<int>& height){  // recursion
        
//         if(n == 0){
//             return 0;
//         }
        
//         int oneStep = cost(n-1, height) + abs(height[n] - height[n-1]);
        
//         int twoStep = INT_MAX;
        
//         if(n > 1){
//             twoStep = cost(n-2, height) + abs(height[n] - height[n-2]);
//         }
        
//         return min(oneStep, twoStep);
        
       
//     }
    
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
        
//         cost(n-1, height);
//     }
// };



class Solution {
  public:
  
    int cost(int n, vector<int>& height, vector<int>&dp){  // memoization
        
        if(n == 0){
            return 0;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        
        
        int oneStep = cost(n-1, height, dp) + abs(height[n] - height[n-1]);
        
        int twoStep = INT_MAX;
        
        if(n > 1){
            twoStep = cost(n-2, height, dp) + abs(height[n] - height[n-2]);
        }
        
        return dp[n] = min(oneStep, twoStep);
        
       
    }
    
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        
        vector<int>dp(n, -1);
        
        
        return cost(n-1, height, dp);
    }
};





