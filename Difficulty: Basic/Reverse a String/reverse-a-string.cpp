class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int start = 0;
        int end = s.size()-1;
        
        while(start < end){
            swap(s[start], s[end]);
            start++, end--;
        }
        
        return s;
    }
};
