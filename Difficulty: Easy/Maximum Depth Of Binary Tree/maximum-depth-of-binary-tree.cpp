/* The Node structure is
class Node {
public:
    int data;
    Node* left;
    Node* right;

};
}; */

class Solution {
  public:
    int maxDepth(Node *root) {
        // code here
        if(root == nullptr){
            return 0;
        }
        
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
