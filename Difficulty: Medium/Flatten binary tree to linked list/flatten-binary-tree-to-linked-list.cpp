// User function Template for C++

class Solution {
  public:
    void flatten(Node *root) {
        // code here
       
        while(root){
            // if lrft part does nor exist
            if(!root->left){
                root = root->right;
            }
            // exist
            
            else{
                Node *curr = root->left;
            
                while(curr->right){
                    curr = curr->right;
                }
                
                curr->right = root->right;
                root->right = root->left;
                root->left = NULL;
                root = root->right;
            }
            
        }
    }
};