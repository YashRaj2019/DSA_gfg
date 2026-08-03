class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        string word, ans;
        
        while(ss >> word){
            reverse(word.begin(), word.end());
            
            if(!ans.empty()){
                ans += " ";
            }
            
            ans += word;
        }
        
        return ans;
    }
};