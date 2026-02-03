class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;
        queue<int> q;

        for(int i = 0; i < n; i++) {

            // same idea: push index if negative
            if(arr[i] < 0) {
                q.push(i);
            }

            // start answering from first window
            if(i >= k - 1) {

                // remove out-of-window indices
                if(!q.empty() && q.front() <= i - k) {
                    q.pop();
                }

                // same answer logic
                if(q.empty())
                    ans.push_back(0);
                else
                    ans.push_back(arr[q.front()]);
            }
        }
        return ans;
    }
};
