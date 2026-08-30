/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

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
    
    int kthSmallest(Node *root, int k) {
        // code here
        vector<int>ans;
        inOrder(root, ans);
        
        if(k > ans.size()){
            return -1;
        }
        
        return ans[k-1];
    }
    
    
};