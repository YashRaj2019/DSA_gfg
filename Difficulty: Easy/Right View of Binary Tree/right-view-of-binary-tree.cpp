/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
        vector<int>ans;
        
        if(!root){
            return ans;
        }
        
        queue<Node *>q;
        
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* curr = q.front();
                q.pop();
                
                if(i == 0){
                    ans.push_back(curr->data);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }
                
                if(curr->left){
                    q.push(curr->left);
                }
            }
        }
        
        return ans;
        
        
    }
};