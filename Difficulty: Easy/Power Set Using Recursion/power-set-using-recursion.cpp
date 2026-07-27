class Solution {
  public:
  
    void solve(int index, string &s, string curr, vector<string>&ans){
        
        if(index == s.size()){
            ans.push_back(curr);
            return;
        }
        
        // exclude the current character
        solve(index+1, s, curr, ans);
        
        // include the current character
        curr.push_back(s[index]);
        solve(index+1, s, curr, ans);
    }
    
    vector<string> powerSet(string s) {
        // code here
        // method: 1
        vector<string>ans;
        string curr = "";
        solve(0, s, curr, ans);
        
        return ans;
        
    }
};
