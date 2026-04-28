
// class Solution {
//   public:
  
//   // top down approach
  
//     int  ways(int i, vector<int> &dp){
//         if(i<=1){
//             return 1;
//         }
//         if(i==2){
//             return 2;
//         }
        
//         if(dp[i] != -1){
//             return dp[i];
//         }
        
//         return dp[i] = ways(i-1, dp)+ ways(i-2, dp) + ways(i-3, dp);
//     }
    
//     int countWays(int n) {
//         // your code here
        
//         vector<int> dp(n+1, -1);
        
        
//         return ways(n, dp);
//     }
// };



class Solution {
  public:
  
  // top down approach
  
    int  ways(int i, vector<int> &dp){
        if(i<=1){
            return 1;
        }
        if(i==2){
            return 2;
        }
        
        if(dp[i] != -1){
            return dp[i];
        }
        
        return dp[i] = ways(i-1, dp)+ ways(i-2, dp) + ways(i-3, dp);
    }
    
    int countWays(int n) {
        // your code here
        
        vector<int> dp(n+1, -1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        
        
        return dp[n];
    }
};
