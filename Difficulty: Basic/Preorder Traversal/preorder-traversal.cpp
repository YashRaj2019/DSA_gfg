/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
   void preOrd(Node* root, vector<int>&ans){
       
       if(root==NULL){
           return;
       }
       
       ans.push_back(root->data);
       preOrd(root->left, ans);
       preOrd(root->right, ans);
   }
  
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        preOrd(root, ans);
        return ans;
    }
};