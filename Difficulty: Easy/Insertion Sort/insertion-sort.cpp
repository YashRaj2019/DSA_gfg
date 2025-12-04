class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        for(int i=0; i<n-1;i++){
            for(int j=i; j>=0;j--){
                if(arr[j]>arr[j+1]){
                    
                    // swap arr[j], arr[j+1]
                    
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
                
                else{
                    break;
                }
            }
        }
    }
};