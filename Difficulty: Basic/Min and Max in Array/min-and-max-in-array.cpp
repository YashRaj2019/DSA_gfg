class Solution {
public:
    vector<int> getMinMax(vector<int>& arr) {
        int mini = arr[0];
        int maxi = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < mini) {
                mini = arr[i];
            }
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }
        
        return {mini, maxi};
    }
};