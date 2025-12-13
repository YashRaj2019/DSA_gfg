class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        
        int left=0;
        int right=arr.size()-1;
        long long area=0;
        
        while(left<right){
            long long width = right-left;
            long long height = min(arr[left], arr[right]);
            area = max(area, width*height);
            
            if(arr[left]<arr[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};