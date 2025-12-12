class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        if(n==0){
            return {};
        }
        
        sort(arr.begin(), arr.end());
        int index=1;
        
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[index - 1]){
                arr[index]=arr[i];
                index++;
            }
        }
        
        return vector<int>(arr.begin(), arr.begin() + index);
    }
};