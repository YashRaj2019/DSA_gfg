class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        
        int x = arr.size()/k;
        
        unordered_map<int, int>mp;
        
        int ans = 0;
        
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
            
            
            if(mp[arr[i]] == x+1){
                ans++;
            }
        }
        return ans;
    }
};