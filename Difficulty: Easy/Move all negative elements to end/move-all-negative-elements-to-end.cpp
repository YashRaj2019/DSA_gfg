class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        
        vector<int>pos, neg;
        
        // separete negative and positive
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            
            else{
                neg.push_back(arr[i]);
            }
        }
        
        
        // put positive back back
        int  k = 0;
        
        for(int i=0;i<pos.size();i++){
            arr[k++] = pos[i];
        }
        
        // put negative at the end
        
        for(int i=0;i<neg.size();i++){
            arr[k++] = neg[i];
        }
        
        
    }
};