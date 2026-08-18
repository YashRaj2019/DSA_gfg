/* Definition for Node
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
  
    void solve(Node* root, vector<int>&temp, vector<vector<int>>&ans){
        
        if(!root){
            return;
        }
        
        // Add current node
        temp.push_back(root->data);
        
        // If leaf node, store the path
        if(root->left == NULL && root->right == NULL){
            ans.push_back(temp);
        }
        
        // left subtree first
        solve(root->left, temp, ans);
        
        // right subtree
        solve(root->right, temp, ans);
        
        // backtrack
        temp.pop_back();
    }
    
    vector<vector<int>> paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        
        solve(root, temp, ans);
        return ans;
        
    }
};