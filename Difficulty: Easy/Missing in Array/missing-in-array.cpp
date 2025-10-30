class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        if (arr.size() == 0)
            return 1;
        long long total = (1LL * n * (n + 1)) / 2;
        long long sum = 0;
        for (int num : arr) {
            sum += num;
        }
        int missing = (int)(total - sum);
        return missing;
    }
};
