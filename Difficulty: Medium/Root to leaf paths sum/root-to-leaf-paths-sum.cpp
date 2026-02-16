/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
    
    long long solve(Node *root, long long curr){
        if(!root){
            return 0;
        }
        
        curr = curr * 10 + root->data;
        
        // if leaf node;
        
        if(!root->left && !root->right){
            return curr;
        }
        
        return solve(root->left, curr) + solve(root->right, curr);
    }
    
    int treePathsSum(Node *root) {
        // code here.
        return solve(root, 0);
    }
};