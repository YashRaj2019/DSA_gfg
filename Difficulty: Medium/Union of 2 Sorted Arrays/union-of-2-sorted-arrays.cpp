class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        int n=a.size();
        int m=b.size();
        
        vector<int> union_arr(n+m);
        
        for(int i=0;i<n;i++){
            union_arr[i]=a[i];
        }
        
        for(int i=0;i<m;i++){
            union_arr[n+i]=b[i];
        }
        
        sort(union_arr.begin(), union_arr.end());
        
        vector<int>result;
        
        result.push_back(union_arr[0]);
        
        for(int i=1;i<n+m;i++){
            if(union_arr[i]!=union_arr[i-1]){
                result.push_back(union_arr[i]);
            }
        }
        
        return result;
        
        
        
    }
};