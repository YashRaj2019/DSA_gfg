/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    void postOrd(Node *root, vector<int>&ans){
        if(root==nullptr){
            return;
        }
        
        postOrd(root->left, ans);
        postOrd(root->right, ans);
        ans.push_back(root->data);
    }
    
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        postOrd(root, ans);
        return ans;
    }
};