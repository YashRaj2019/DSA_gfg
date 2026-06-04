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
        
        vector<int>ans;
        queue<pair<Node*, int>>q; // (node, horizonatl distance(HD))
        map<int, int>m; // (horizontal distance, node value)
        
        q.push({root, 0});
        
        while(q.size() > 0){
            Node *curr = q.front().first;
            int currHD = q.front().second;
            
            q.pop();
            
            if(m.find(currHD) == m.end()){
                m[currHD] = curr->data;
            }
            
            if(curr->left != NULL){
                q.push({curr->left, currHD-1});
            }
            
            if(curr->right != NULL){
                q.push({curr->right, currHD+1});
            }
        }
        
        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
};