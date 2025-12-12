class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        if(n == 0) return {};

        int index = 1;

        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[index - 1]) {
                arr[index] = arr[i];
                index++;
            }
        }

        // Return the deduplicated array part
        return vector<int>(arr.begin(), arr.begin() + index);
    }
};
