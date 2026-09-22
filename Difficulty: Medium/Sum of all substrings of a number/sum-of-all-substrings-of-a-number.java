class Solution {
    public static int sumSubstrings(String s) {
        // code here
        int sum = 0;
        
        for(int i=0; i<s.length(); i++){
            for(int j=i+1; j<=s.length(); j++){
                
                String sub  = s.substring(i, j);
                
                sum += Integer.parseInt(sub);
            }
        }
        return sum;
    }
}