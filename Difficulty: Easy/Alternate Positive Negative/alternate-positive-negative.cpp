class Solution {
public:
    void rearrange(vector<int> &arr) {

        vector<int> positive, negative;

        // separate
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= 0)  
                positive.push_back(arr[i]);
            else
                negative.push_back(arr[i]);
        }

        vector<int> ans;
        int i = 0, j = 0;

        // merge alternately
        while(i < positive.size() && j < negative.size()) {
            ans.push_back(positive[i++]);
            ans.push_back(negative[j++]);
        }

        // remaining positives
        while(i < positive.size()) {
            ans.push_back(positive[i++]);
        }

        // remaining negatives
        while(j < negative.size()) {   
            ans.push_back(negative[j++]);
        }

        // copy back to original array 
        arr = ans;
    }
};