// User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        
        int count_zero = 0;
        int step = 0;
        int mul = 1;
        
        for(int i=0;i<N;i++){
            if(arr[i]>0){
                step=step+(arr[i] - 1);
                mul = mul*1;
            }
            
            else if(arr[i]<0){
                step=step+(-1-arr[i]);
                mul=mul* -1;
            }
            else{
                // in case of 0
                step=step+1;
                count_zero++;
            }
        }
        
        if(mul==1 || count_zero>0){
            return step;
        }
        return step+2;
    }
};