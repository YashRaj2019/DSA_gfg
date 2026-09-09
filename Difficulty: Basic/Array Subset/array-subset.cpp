class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        if(b.size() > a.size()){
            return false;
        }
        
        unordered_map<int, int>mp;
        
        for(auto x : a){
            mp[x]++;
        }
        
        for(auto x : b){
            if(mp[x] == 0){
                return false;
            }
            
            mp[x]--;
        }
        
        return true;
    }
};