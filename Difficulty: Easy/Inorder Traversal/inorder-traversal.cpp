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
  
    void inOrd( Node *root, vector<int>&ans){
        if(root==nullptr){
            return;
        }
        
        inOrd(root->left, ans);
        ans.push_back(root->data);
        inOrd(root->right, ans);
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        inOrd(root, ans);
        return ans;
        
    }
};