/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

class Solution {
  public:

    int getHeight(Node* node) {
        if (node == NULL)
            return 0;
        return node->height;
    }

    Node* rightRotate(Node* root) {
        Node* newRoot = root->left;
        Node* transferSubtree = newRoot->right;

        newRoot->right = root;
        root->left = transferSubtree;

        root->height = 1 + max(getHeight(root->left), getHeight(root->right));
        newRoot->height = 1 + max(getHeight(newRoot->left), getHeight(newRoot->right));

        return newRoot;
    }

    Node* leftRotate(Node* root) {
        Node* newRoot = root->right;
        Node* transferSubtree = newRoot->left;

        newRoot->left = root;
        root->right = transferSubtree;

        root->height = 1 + max(getHeight(root->left), getHeight(root->right));
        newRoot->height = 1 + max(getHeight(newRoot->left), getHeight(newRoot->right));

        return newRoot;
    }

    Node* insertToAVL(Node* root, int data) {

        // FIXED HERE 
        if (root == NULL) {
            return new Node(data);
        }

        if (data < root->data)
            root->left = insertToAVL(root->left, data);
        else
            root->right = insertToAVL(root->right, data);

        root->height = 1 + max(getHeight(root->left), getHeight(root->right));

        int balanceFactor = getHeight(root->left) - getHeight(root->right);

        // LL
        if (balanceFactor > 1 && data < root->left->data)
            return rightRotate(root);

        // RR
        if (balanceFactor < -1 && data > root->right->data)
            return leftRotate(root);

        // LR
        if (balanceFactor > 1 && data > root->left->data) {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        // RL
        if (balanceFactor < -1 && data < root->right->data) {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }
};