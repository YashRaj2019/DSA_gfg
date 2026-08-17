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
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        
        queue<pair<Node*, int>>q; // (node, hd)
        map<int, int>mp; // (hd, node value);
        
        q.push({root, 0});
        
        while(!q.empty()){
            Node* curr = q.front().first;
            int currHD = q.front().second;
            q.pop();
            
            mp[currHD] = curr->data;
            
            if(curr->left){
                q.push({curr->left, currHD-1});
            }
            
            if(curr->right){
                q.push({curr->right, currHD+1});
            }
        }
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};