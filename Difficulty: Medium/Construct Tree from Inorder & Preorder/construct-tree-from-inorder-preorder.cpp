/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    int find(vector<int> &inorder, int target, int start, int end){
        for(int i=start;i<=end;i++){
            if(inorder[i]==target){
                return i;
            }
        }
        
        return -1;
    }
    
    Node *Tree(vector<int> &inorder, vector<int>&preorder, int inStart, int inEnd, int index){
        // here index represents strating of preorder
        
        if(inStart>inEnd){
            return nullptr;
        }
        
        Node * root = new Node(preorder[index]);
        int pos = find(inorder, preorder[index], inStart, inEnd);
        
        root->left = Tree(inorder, preorder, inStart, pos-1, index+1);
        root->right = Tree(inorder, preorder, pos+1, inEnd, index+(pos-inStart)+1);
        
        return root;
    }
    
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        
        int n = inorder.size();
        return Tree(inorder, preorder, 0, n-1, 0);
    }
};