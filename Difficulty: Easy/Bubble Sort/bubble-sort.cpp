class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i=0; i<arr.size(); i++){
            for(int j = i+1; j<arr.size(); j++){
                if(arr[j] < arr[i]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
};