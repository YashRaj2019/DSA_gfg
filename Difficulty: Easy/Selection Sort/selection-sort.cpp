class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i=0;i<n-1;i++){
            int index = i;
            
            for(int j=i; j<n;j++){
                if(arr[j]<arr[index]){
                    index=j;
                }
            }
            // swap arr[i] with arr[index]
            int temp = arr[index];
            arr[index]=arr[i];
            arr[i]=temp;
        }
        return;
    }
};