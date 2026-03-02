// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1

void kSum(Node *root, int &sum, int &k){
    if(!root){
        return;
    }
    // Inorder traversal
    kSum(root->left, sum, k);
    k--;
    
    if(k>=0){
        sum += root->data;
    }
    
    if(k<=0){
        return;
    }
    
    kSum(root->right, sum, k);
}


int sum(Node* root, int k) {
    
    // Your code here
    int sum = 0;
    kSum(root, sum, k);
    return sum;
}