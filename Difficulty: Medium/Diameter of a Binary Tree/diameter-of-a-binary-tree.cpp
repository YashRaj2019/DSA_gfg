/*Structure of binary tree Node 
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    int ans = 0;
    
    int helper(Node* root){
        if(root == nullptr){
            return 0;
        } 
        
        int leftDia = helper(root->left);
        int rightDia = helper(root->right);
            
        ans = max(ans, (leftDia + rightDia));
            
        return 1 + max(leftDia, rightDia);
        
    }
    
    int diameter(Node* root) {
        // code here
        helper(root);
        return ans;
    
    }
};