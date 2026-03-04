// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution {
  public:
    
    Node *build(int &index, int minVal, int maxVal, int arr[], int n){
        if(index>=n){
            return NULL;
        }
        
        if(arr[index]< minVal || arr[index]>maxVal){
            return NULL;
        }
        
        Node *root = newNode(arr[index++]);
        
        root->left = build(index, minVal, root->data, arr, n);
        root->right = build(index, root->data, maxVal, arr, n);
        
        return root;
    }
    // Function that constructs BST from its preorder traversal.
    Node* Bst(int pre[], int size) {
        // code here
        
        int index = 0;
        return build(index, INT_MIN, INT_MAX, pre, size);
        
    }
};