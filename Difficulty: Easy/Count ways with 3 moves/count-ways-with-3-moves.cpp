
class Solution {
  public:
  
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
        return ways(n, dp);
    }
};
