/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
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
    
    Node *Tree(vector<int> &inorder, vector<int>&postorder, int inStart, int inEnd, int index){
        // here index represents strating of preorder
        
        if(inStart>inEnd){
            return nullptr;
        }
        
        Node * root = new Node(postorder[index]);
        int pos = find(inorder, postorder[index], inStart, inEnd);
        
        //right 
        root->right = Tree(inorder, postorder, pos+1, inEnd, index-1);
        //left
        root->left = Tree(inorder, postorder, inStart, pos-1, index-(inEnd -pos) -1);
        
        return root;
    }
    
    
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
        int n = inorder.size();
        
        return Tree(inorder, postorder, 0, n-1, n-1);
        
        
    }
};