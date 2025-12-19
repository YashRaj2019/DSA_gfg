class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        int n = s.size();
        if(n<2){
            return 0;
        }
        
        int count = 0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
        
        count = (count*(count - 1))/2;
        return count;
    }
};