//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int count=0, row=A.size(), col = A[0].size();
        int i=0, j=col-1;
        
        while(i<row && j>=0){
            while(j>=0 && A[i][j]==1){
                j--;
            }
            count+=j+1;
            i++;
        }
        
        return count;
    }
};