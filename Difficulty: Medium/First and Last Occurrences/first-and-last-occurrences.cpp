class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        
        int mid, start=0, end=n-1, left_index=-1, right_index=-1;
        
        while(start<=end){
            mid= start+(end-start)/2;
            
            if(arr[mid]==x){
                left_index=mid;
                end=mid-1;
            }
            
            else if(arr[mid]>x){
                end=mid-1;
            }
            
            else{
                start=mid+1;
            }
        }
        
        start=0;
        end=arr.size()-1;
        
        while(start<=end){
            mid= start+(end-start)/2;
            
            if(arr[mid]==x){
                right_index=mid;
                start=mid+1;
            }
            
            else if(arr[mid]>x){
                end=mid-1;
            }
            
            else{
                start=mid+1;
            }
        }
        
        return {left_index, right_index};
    }
};