/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        // code here
        
        // base case
        if(!root){
            return nullptr;
        }
        
        if(root->data > x){
            root->left = delNode(root->left, x);
        }
        
        else if(root->data < x){
            root->right = delNode(root->right, x);
        }
        
        else{
            // deleteing leaf node
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            // 1 child exists i.e either left or right node
            
            else if(!root->right){ // left child exist
                Node *temp = root->left;
                delete root;
                return temp;
            } 
            
            else if(!root->left){    // right child exist
                Node * temp = root->right;
                delete root;
                return temp;
            }
            
            // 2 child exist
            // find the greatest element from left
            Node *child = root->left;
            Node *parent = root;
            
            // now reach upto right most node
            
            while(child->right){
                parent = child;
                child = child->right;
            }
            
            if(root!=parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            
            else{
                child->right = root->right;
                delete root;
                return child;
            }
            
        }
        
        return root;
    }
};