/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    
    void countLeaf(Node *root, int &count){
        if(root==nullptr){
            return ;
        }
        
        if(!root->left && !root->right){
            count++;
            return ;
        }
        
        countLeaf(root->left, count);
        countLeaf(root->right, count);
        
    }
    
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count=0;
        countLeaf(root, count);
        return count;
        
        
    }
};