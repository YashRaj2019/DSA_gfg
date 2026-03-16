/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void correctBST(Node* root) {
        // add code here.
        
        Node *curr = NULL;
        Node *first = NULL, *second = NULL;
        Node *last = NULL, *present = NULL;
        
        // Morris Traversal
        while(root){
            // left doesn't exist
            if(!root->left){
                
                last = present;
                present = root;
                
                if(last && last->data > present->data){
                    if(!first){
                        first=last;
                        second=present;
                    }
                    else{
                        second = present;
                    }
                }
                root=root->right;
            }
            
            // left exist
            else{
                curr = root->left;
                while(curr->right && curr->right!=root){
                    curr = curr->right;
                }
                
                // left subtree not travesred yet
                if(!curr->right){
                    curr->right=root;
                    root=root->left;
                }
                
                // left subtree already travesred
                else{
                    curr->right=NULL;
                    last = present;
                    present = root;
                    
                    if(last && last->data > present->data){
                        if(!first){
                            first=last;
                            second=present;
                        }
                        else{
                            second = present;
                        }
                    }
                    root=root->right;
                }
                
            }
        }
        
        int num = first->data;
        first->data = second->data;
        second->data = num;
    }
};