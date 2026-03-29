class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        // arr[i], count
        unordered_map<int, int>mp;
        int distinct_count = 0;
        
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
            if(mp[arr[i]] == 1){
                distinct_count++;
            }
        }
        
        vector<int>ans;
        ans.push_back(distinct_count);
        
        for(int i=k;i<arr.size();i++){
            // old element will be removed
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0){
                distinct_count--;
            }
            
            // new element will be added
            mp[arr[i]]++;
            if(mp[arr[i]] == 1){
                distinct_count++;
            }
            
            ans.push_back(distinct_count);

        }
        
        return ans;
    }
};