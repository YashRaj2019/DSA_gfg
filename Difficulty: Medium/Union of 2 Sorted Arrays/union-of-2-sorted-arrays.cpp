class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        
        vector<int>result;
        
        int i=0, j=0;
        
        while(i<n && j<m){
            
            
            if(i>0 && a[i]==a[i-1]){
                i++;
                continue;
            }
            
            if(j>0 && b[j]==b[j-1]){
                j++;
                continue;
            }
            
            if(a[i]<b[j]){
                result.push_back(a[i]);
                i++;
            }
            
            else if(b[j]<a[i]){
                result.push_back(b[j]);
                j++;
            }
            
            else{
                result.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        while(i<n){
            if(i==0 || a[i]!=a[i-1]){
                result.push_back(a[i]);
            }
                i++;
        }
        
        while(j<m){
            if(j==0 || b[j]!=b[j-1]){
                result.push_back(b[j]);
            }
                j++;
        }
        
        return result;
    }
};