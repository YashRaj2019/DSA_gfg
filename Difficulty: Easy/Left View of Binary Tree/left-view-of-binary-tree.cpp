/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
    // method 2: using recursion
    
    void lview(Node *root, int level, vector<int>&ans){
        if(!root){
            return;
        }
        
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        
        lview(root->left, level+1, ans);
        lview(root->right, level+1, ans);
    }
    vector<int> leftView(Node *root) {
        // code here
        
        // method 1 using queue
        
        // queue<Node*>q;
        // q.push(root);
        
        // vector<int>ans;
        
        // while(!q.empty()){
        //     int n = q.size();
        //     ans.push_back(q.front()->data);
            
        //     while(n--){
        //         Node *temp = q.front();
        //         q.pop();
                
        //         if(temp->left){
        //             q.push(temp->left);
        //         }
                
        //         if(temp->right){
        //             q.push(temp->right);
        //         }
        //     }
        // }
        
        // return ans;
        
        // method 2: using recursion
        
        
        
        vector<int>ans;
        if(!root){
            return ans;
        }
        
        lview(root,0,ans);
        return ans;
        
        
    }
};