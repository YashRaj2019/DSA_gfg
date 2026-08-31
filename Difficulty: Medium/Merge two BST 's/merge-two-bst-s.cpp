/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
  
    void inorder(Node* root, vector<int>&ans){
        if(!root){
            return;
        }
        
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    
    vector<int> merge(Node *r1, Node *r2) {
        // code here
        vector<int>ans;
        
        inorder(r1, ans);
        inorder(r2, ans);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};