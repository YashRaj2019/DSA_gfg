class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        
        if(s1.size() != s2.size()){
            return false;
        }
        
        s1 =s1+s1;
        
        return s1.find(s2) != string::npos;
    }
};