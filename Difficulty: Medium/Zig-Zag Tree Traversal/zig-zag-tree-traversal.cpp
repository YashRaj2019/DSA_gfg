/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        
        queue<Node*>q;
        q.push(root);
        
        bool leftToRight = true;
        
        while(!q.empty()){
            
            int n = q.size();
            vector<int>level(n);
            
            for(int i=0; i<n; i++){
                
                Node* node = q.front();
                q.pop();
                
                // find position to fill node's value
                int index = leftToRight ? i : n - 1 - i;
                level[index] = node->data;
                
                if(node->left){
                    q.push(node->left);
                }
                
                if(node->right){
                    q.push(node->right);
                }
                
            }
            
            for(auto it : level){
                ans.push_back(it);
            }
            
            leftToRight =! leftToRight;
        }
        return ans;
    }
};