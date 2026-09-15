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



// class Solution {
//   public:
  
//     int cost(int n, vector<int>& height, vector<int>&dp){  // memoization
        
//         if(n == 0){
//             return 0;
//         }
        
//         if(dp[n] != -1){
//             return dp[n];
//         }
        
        
        
//         int oneStep = cost(n-1, height, dp) + abs(height[n] - height[n-1]);
        
//         int twoStep = INT_MAX;
        
//         if(n > 1){
//             twoStep = cost(n-2, height, dp) + abs(height[n] - height[n-2]);
//         }
        
//         return dp[n] = min(oneStep, twoStep);
        
       
//     }
    
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
        
//         vector<int>dp(n, -1);
        
        
//         return cost(n-1, height, dp);
//     }
// };




// class Solution {
//   public:
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
        
//         vector<int>dp(n, 0);
//         dp[0]=0;
        
//         for(int i=1; i<n; i++){
//             int one = dp[i-1] + abs(height[i] - height[i-1]);
            
//             int two = INT_MAX;
//             if(i > 1){
//                 two = dp[i-2] + abs(height[i] - height[i-1]);
//             }
            
//             dp[i] = min(one, two);
//         }
        
//         return dp[n-1];
//     }
// };


class Solution {
public:

    int minCost(vector<int>& height) {

        int n = height.size();

        int prev2 = 0;  // dp[i-2]
        int prev1 = 0;  // dp[i-1]

        for (int i = 1; i < n; i++) {

            int oneJump = prev1
                        + abs(height[i] - height[i - 1]);

            int twoJump = INT_MAX;

            if (i > 1) {
                twoJump = prev2
                        + abs(height[i] - height[i - 2]);
            }

            int current = min(oneJump, twoJump);

            // Move to next state
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};







