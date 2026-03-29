// User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
        
        // mp [][]
        unordered_map<int, unordered_map<int, int>>mp;
        mp[0][0] = 1;
        long long count_0 = 0, count_1 = 0, count_2 = 0;
        
        long long sum = 0;
        int first , second;
        
        for(int i=0; i<str.size();i++){
            if(str[i]=='0'){
                count_0++;
            }
            else if(str[i]=='1'){
                count_1++;
            }
            else{
                count_2++;
            }
            
            first = count_0 - count_1, second = count_0 - count_2;
            sum += mp[first][second];
            mp[first][second]++;
        }
        
        return sum;
    }
};