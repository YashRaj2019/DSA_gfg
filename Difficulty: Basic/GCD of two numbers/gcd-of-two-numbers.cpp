class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(a && b){
            if(a > b){
                a = a%b;
            }
            else{
                b = b%a;
            }
        }
        
        if(a == 0){
            return b;
        }
        return a;
    }
};
