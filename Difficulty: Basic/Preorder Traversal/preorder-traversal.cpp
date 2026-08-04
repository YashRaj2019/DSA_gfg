/* Structure of Tree Node
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        
        if(root == NULL){
            return ans;
        }
        
        stack<Node*>st;
        st.push(root);
        
        while(!st.empty()){
            root = st.top();
            st.pop();
            
            ans.push_back(root->data);
            
            
            if(root->right != nullptr){
                st.push(root->right);
            }
            
            if(root->left != nullptr){
                st.push(root->left);
            }
        }
        return ans;
    }
};