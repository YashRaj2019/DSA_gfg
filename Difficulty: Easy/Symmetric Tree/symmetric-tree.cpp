/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    
    bool isMirror(Node* p, Node* q){
        
        if(!p && !q){
            return true;
        }
        
        if(!p || !q){
            return false;
        }
        
        return (p->data == q->data) && isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }
    
    bool isSymmetric(Node* root) {
        // code here
        return isMirror(root->left, root->right);
    }
};