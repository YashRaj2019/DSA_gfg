/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    class Compare{
        public:
        bool operator()(Node *a, Node *b){
            return a->data > b->data;
        }
    };
    
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        
        // min heap
        priority_queue<Node *, vector<Node *>, Compare>p;
        
        // step 1 : Push all the elements into heap
        for(int i=0;i<arr.size();i++){
            if(arr[i] != NULL){
                p.push(arr[i]);
            }
        }
        
        // Dummy node for result
        Node *dummy = new Node(0);
        Node *tail = dummy;
        
        // step 2 : Process heap
        
        while(!p.empty()){
            Node *temp = p.top();
            p.pop();
            
            tail->next = temp;
            tail = tail->next;
            
            // push node if exits
            if(temp->next != NULL){
                p.push(temp->next);
            }
        }
        return dummy->next;
    }
};