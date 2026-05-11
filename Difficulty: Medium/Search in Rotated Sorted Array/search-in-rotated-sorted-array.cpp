class Solution {
  public:
  
    int binarySearch(vector<int>& arr, int start, int end, int key){
        
        // base case
        if(start > end){
            return -1;
        }
        
        int mid = start + (end - start) / 2;
        
        // key found
        if(arr[mid] == key){
            return mid;
        }
        
        // Left half sorted
        if(arr[start] <= arr[mid]){
            
            // key lies in left half
            if(key >= arr[start] && key < arr[mid]){
                return binarySearch(arr, start, mid - 1, key);
            }
            else{
                return binarySearch(arr, mid + 1, end, key);
            }
        }
        
        // Right half sorted
        else{
            
            // key lies in right half
            if(key > arr[mid] && key <= arr[end]){
                return binarySearch(arr, mid + 1, end, key);
            }
            else{
                return binarySearch(arr, start, mid - 1, key);
            }
        }
    }
  
    int search(vector<int>& arr, int key) {
        
        return binarySearch(arr, 0, arr.size() - 1, key);
    }
};