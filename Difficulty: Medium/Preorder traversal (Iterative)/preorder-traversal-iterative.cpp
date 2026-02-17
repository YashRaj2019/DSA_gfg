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
    vector<int> preOrder(Node* root) {
        // code here
        // stack<Node*>s;
        // s.push(root);
        // vector<int>ans;
        
        // while(!s.empty()){
        //     Node *temp = s.top();
        //     s.pop();
            
        //     ans.push_back(temp->data);
            
        //     if(temp->right){
        //         s.push(temp->right);
        //     }
            
        //     if(temp->left){
        //         s.push(temp->left);
        //     }
            
        // }
        
        // return ans;
        
        // method 2
        
        vector<int>ans;
        
        while(root){
            // left part does not exist
            if(!root->left){
               ans.push_back(root->data);
               root = root->right;
            }
            // left part exist
            
            else{
                
                Node *curr = root->left;
                
                while(curr->right && curr->right != root){
                    curr = curr->right;
                }
                
                // left subtree not traversed
                if(curr->right==NULL){
                    ans.push_back(root->data);
                    curr->right = root;
                    root = root->left;
                }
                 //already traversed
                else{
                    curr->right = NULL;
                    root = root->right;
                }
               
            }
            
        }
        
        return ans;
    }
};