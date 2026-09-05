/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
  
    Node* prev = NULL;
    Node* first = NULL;
    Node* sec = NULL;
    
    void inorder(Node* root){
        if(!root){
            return;
        }
        
        inorder(root->left);
        
        if(prev != NULL && prev->data > root->data){
            if(first == NULL){
                first = prev;
            } 
            sec = root;
        }
        
        prev = root;
        inorder(root->right);
    }
    
    Node* correctBST(Node* root) {
        // code here
        
        inorder(root);
        
        int temp = first->data;
        first->data = sec->data;
        sec->data = temp;
        
        return root;
    }
};