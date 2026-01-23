class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        
        //sort(arr.begin(), arr.end());
        
        // method 2
        
        int count0 = 0;
        
        // count 0s
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;
            }
        }
        
        // put 0s
        for(int i=0;i<count0;i++){
            arr[i]=0;
        }
        
        
        // put 1s
        for(int i=count0;i<arr.size();i++){
            arr[i]=1;
        }
    }
};
