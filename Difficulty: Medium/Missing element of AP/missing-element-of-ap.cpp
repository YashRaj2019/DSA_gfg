class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();

        // find correct common difference
        int d = arr[1] - arr[0];
        for (int i = 2; i < n; i++) {
            if (abs(arr[i] - arr[i - 1]) < abs(d)) {
                d = arr[i] - arr[i - 1];
            }
        }
        
        
        // find missing element
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] != d) {
                return arr[i - 1] + d;
            }
        }

        // AP is complete → return next term
        return arr[n - 1] + d;
    }
};
