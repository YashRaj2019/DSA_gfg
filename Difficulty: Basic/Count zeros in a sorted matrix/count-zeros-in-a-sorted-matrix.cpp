class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        int n = A.size(), i = 0, j = n - 1, cnt = 0;
        while (i < n && j >= 0) {
            if (A[i][j] == 0) {
                cnt += j + 1;
                i++;
            } else j--;
        }
        return cnt;
    }
};
