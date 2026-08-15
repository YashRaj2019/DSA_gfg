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
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*, int>>q; // (node, horizontal distance(HD))
        map<int, int>m; // (HD, node Val)
        
        q.push({root, 0});
        
        vector<int>ans;
        
        while(!q.empty()){
            
            Node* curr = q.front().first;
            int currHD = q.front().second;
            q.pop();
            
            if(m.find(currHD) == m.end()){
                m[currHD] = curr->data;
            }
            
            if(curr->left){
                q.push({curr->left, currHD-1});
            }
            
            if(curr->right){
                q.push({curr->right, currHD+1});
            }
            
        }
        
        for(auto it : m){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};