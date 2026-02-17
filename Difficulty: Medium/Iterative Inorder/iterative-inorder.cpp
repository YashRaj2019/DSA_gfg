// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        
        // method 1
        
        // stack<Node*>s;
        // stack<bool>visited;
        // s.push(root);
        // visited.push(0);
        
        // vector<int>ans;
        
        // while(!s.empty()){
        //     Node *temp = s.top();
        //     s.pop();
            
        //     bool flag = visited.top();
        //     visited.pop();
            
        //     // first time visit
        //     if(flag==0){
                
        //         // right
        //         if(temp->right){
        //             s.push(temp->right);
        //             visited.push(0);
        //         }
        //         // node
        //         s.push(temp);
        //         visited.push(1);
        //         // left
        //         if(temp->left){
        //             s.push(temp->left);
        //             visited.push(0);
        //         }
        //     }
        //     // second time visit
        //     else{
        //         ans.push_back(temp->data);
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
                    curr->right = root;
                    root = root->left;
                }
                 //already traversed
                else{
                    curr->right = NULL;
                    ans.push_back(root->data);
                    root = root->right;
                }
               
            }
            
        }
        
        return ans;
    }
};