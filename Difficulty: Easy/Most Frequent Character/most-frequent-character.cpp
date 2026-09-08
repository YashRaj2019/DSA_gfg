class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        unordered_map<char, int>m;
        
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        
        int maxFreq = 0;
        char ans;
        
        for(char c = 'a'; c < 'z'; c++){
            if(m[c] > maxFreq){
                maxFreq = m[c];
                ans = c;
            }
        }
        
        return ans;
    }
};