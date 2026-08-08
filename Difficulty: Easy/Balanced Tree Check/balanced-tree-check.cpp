/* Structure of binary tree node
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
  
    int height(Node* root, bool &valid){
        if(root == nullptr){
            return 0;
        }
        
        int left = height(root->left, valid);
        int right = height(root->right, valid);
        
        if(abs(left - right) > 1){
            valid = 0;
        }
        
        return 1 + max(left, right);
    }
    
    bool isBalanced(Node* root) {
        // code here
        bool valid = 1;
        height(root, valid);
        return valid;
        
    }
};