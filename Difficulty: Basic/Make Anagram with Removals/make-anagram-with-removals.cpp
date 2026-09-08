class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        // code here
        int f1[26] = {0};
        int f2[26] = {0};
        
        for(int i=0; i<s1.size(); i++){
            f1[s1[i] - 'a']++;
        }
        
        for(int i=0; i<s2.size(); i++){
            f2[s2[i] - 'a']++;
        }
        
        int ans = 0;
        
        for(int i=0; i<26; i++){
            ans += abs(f1[i] - f2[i]);
        }
        
        return ans;
    }
};
