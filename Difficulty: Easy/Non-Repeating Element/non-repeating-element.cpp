
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // code here
        unordered_map<int, int>mp;
        
        for(int x : arr){
            mp[x]++;
        }
        
        for(int x: arr){
            if(mp[x] == 1){
                return x;
            }
        }
        
        return 0;
    }
};
