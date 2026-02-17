/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        
        if(root==nullptr){
            return 0;
        }
        
        if(root->data == key){
            return 1;
        }
        
        if(key<root->data){
            return search(root->left, key);
        }
        
        return search(root->right, key);
    }
};