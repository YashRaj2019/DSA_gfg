
class Solution {
  public:
    int countWays(int n) {
        // your code here
        if(n<=2){
            return n;
        }
        
        vector<int>dp(4);
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        
        for(int i=4; i<=n; i++){
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = dp[3];
            dp[3] = dp[0] + dp[1] + dp[2];
        }
        
        return dp[3];
    }
};
