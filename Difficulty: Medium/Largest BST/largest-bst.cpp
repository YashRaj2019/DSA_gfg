/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/


    class Box{
public:
    bool BST;
    int size;
    int min, max;

    Box(int data){
        BST = 1;
        size = 1;
        min = data;
        max = data;
    }
};

Box* find(Node *root, int &TotalSize){

    if(root == NULL)
        return NULL;

    Box *left = find(root->left, TotalSize);
    Box *right = find(root->right, TotalSize);

    Box *curr = new Box(root->data);

    if(left){
        curr->size += left->size;
        curr->min = min(curr->min, left->min);
        curr->max = max(curr->max, left->max);
    }

    if(right){
        curr->size += right->size;
        curr->min = min(curr->min, right->min);
        curr->max = max(curr->max, right->max);
    }

    // Check BST condition
    if(left && (!left->BST || left->max >= root->data))
        curr->BST = false;

    if(right && (!right->BST || right->min <= root->data))
        curr->BST = false;

    if(curr->BST)
        TotalSize = max(TotalSize, curr->size);

    return curr;
}
    
    
class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root) {
        // Your code here
        
        int TotalSize = 0;
        find(root, TotalSize);
        return TotalSize;
    }
};