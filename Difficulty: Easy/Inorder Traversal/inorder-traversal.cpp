/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        stack<Node*>st;
        Node* temp = root;
        vector<int>ans;
        
        while(true){
            if(temp != NULL){
                st.push(temp);
                temp = temp->left;
            }
            else{
                if(st.empty()==true){
                    break;
                }
                
                temp = st.top();
                st.pop();
                ans.push_back(temp->data);
                temp = temp->right;
            }
        }
        return ans;
    }
};