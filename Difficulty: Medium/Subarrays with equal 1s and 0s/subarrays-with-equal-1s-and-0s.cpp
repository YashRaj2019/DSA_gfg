class Solution {
  public:
    int countSubarray(vector<int>& arr) {
        // code here
        
        int sum = 0, ans = 0;
        unordered_map<int, int>mp;
        
        mp[0] = 1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                sum++;
            }
            else{
                sum--;
            }
            
            ans += mp[sum];
            mp[sum]++;
        }
        return ans;
    }
};