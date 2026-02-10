/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        // code here
        
        
        
        stack<Node*>s1; // left to right
        stack<Node*>s2; // right to left
        
        s1.push(root);
        
        vector<int>ans;
        
        while(!s1.empty() || !s2.empty()){
            
            // right to left
            if(!s1.empty()){
                while(!s1.empty()){
                    Node *temp = s1.top();
                    s1.pop();
                    ans.push_back(temp->data);
                    
                    // right
                    
                    if(temp->right){
                        s2.push(temp->right);
                    }
                    
                    //left
                    
                    if(temp->left){
                        s2.push(temp->left);
                    }
                }
            }
            
            // left to right
            else{
                
                while(!s2.empty()){
                    Node *temp = s2.top();
                    s2.pop();
                    ans.push_back(temp->data);
                    
                    //left
                    
                    if(temp->left){
                        s1.push(temp->left);
                    }
                    
                    // right
                    
                    if(temp->right){
                        s1.push(temp->right);
                    }
                    
                }
                 
            }
        }
        
        return ans;
    }
};