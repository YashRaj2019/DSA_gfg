/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
     bool isLeaf(Node* node){
            return node->left == NULL && node->right == NULL;
        }
        
        void addLeftBoundary(Node* root, vector<int>&ans){
            
            Node* curr = root->left;
            
            while(curr){
                
                if(!isLeaf(curr)){
                    ans.push_back(curr->data);
                }
                
                // prefer left child
                if(curr->left){
                    curr = curr->left;
                }
                else{
                    curr = curr->right;
                }
            }
            
        }
        
        void addLeaves(Node* root, vector<int>&ans){
            
            if(root == NULL){
                return;
            }
            
            if(isLeaf(root)){
                ans.push_back(root->data);
                return;
            }
            
            addLeaves(root->left, ans);
            addLeaves(root->right, ans);
        }
        
        void addRightBoundary(Node* root, vector<int>&ans){
            
            vector<int>temp;
            
            Node* curr = root->right;
            
            while(curr){
                
                if(!isLeaf(curr)){
                    
                    temp.push_back(curr->data);
                }
                
                // prefer right child
                if(curr->right){
                    curr = curr->right;
                }
                else{
                    curr = curr->left;
                }
            }
            
            // reverse right boundary
            for(int i=temp.size()-1; i>=0; i--){
                ans.push_back(temp[i]);
            }
            
        }
        
        
    vector<int> boundaryTraversal(Node *root) {
        // code here
        
        vector<int>ans;
        
        if(root == NULL){
            return ans;
        }
        
        // Root
        if(!isLeaf(root)){
            ans.push_back(root->data);
        }
        
        // 1. Left Boundary
        addLeftBoundary(root, ans);
        
        // 2. Leaves
        addLeaves(root, ans);
        
        // 3. Right Boundary
        addRightBoundary(root, ans);
        
        return ans;
       
    }
};