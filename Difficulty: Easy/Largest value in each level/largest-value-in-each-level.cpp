// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        vector<int>ans;
        if(root==nullptr){
            return ans;
        }
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            int maxVal = INT_MIN;
            
            for(int i=0;i<size;i++){
                Node *temp = q.front();
                q.pop();
                
                maxVal = max(maxVal, temp->data);
                
                if(temp->left!=0){
                    q.push(temp->left);
                }
                
                if(temp->right!=0){
                    q.push(temp->right);
                }
            }
            ans.push_back(maxVal);
        }
        return ans;
    }
};