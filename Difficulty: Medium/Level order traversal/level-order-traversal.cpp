/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        queue<Node*>q;
        q.push(root);
        
        vector<vector<int>>result;
        
      
        
        while(!q.empty()){
            int size = q.size();
            
            vector<int>ans;
            
            for(int i=0;i<size;i++){
                Node *temp =q.front();

                q.pop();

                
                ans.push_back(temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            result.push_back(ans);
        }
        
        return result;
        
    }
};