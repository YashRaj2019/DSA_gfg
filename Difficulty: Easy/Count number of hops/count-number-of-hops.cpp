
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {

        // your code here
         if(n==1){
             return 1;
         }
         
         if(n==2){
             return 2;
         }
         
         if(n==3){
             return 4;
         }
         
         int a = 1, b = 2, c = 4;
         
         for(int i = 4; i <= n; i++){
             int curr = a + b + c;
             a = b;
             b = c;
             c = curr;
         }
         
         return c;
    }
};
