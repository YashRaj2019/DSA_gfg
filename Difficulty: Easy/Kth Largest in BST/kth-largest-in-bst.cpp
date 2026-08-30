/* Structure of a Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    void inOrder(Node* root, vector<int>&ans){
        if(!root){
            return;
        }

        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
    }
    
    int kthLargest(Node *root, int k) {
        // code here

            vector<int>ans;
            inOrder(root, ans);
            return ans[ans.size() - k];
    }
};