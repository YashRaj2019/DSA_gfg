class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        if(s.size() < 2){
            return 0;
        }
        
        int count =0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                count++;
            }
        }
        
        count = (count * (count -1))/2;
        return count;
    }
};