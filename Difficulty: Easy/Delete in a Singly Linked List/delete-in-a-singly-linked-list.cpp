/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==nullptr){
            return nullptr;
        }
        
        if(x==1){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        Node* curr = head;
        Node* prev = nullptr;
        
        for(int i=1; curr != nullptr && i<x; i++){
            prev = curr;
            curr=curr->next;
        }
        
        if(curr==nullptr){
            return head;
        }
        
        prev->next = curr->next;
        
        delete curr;
        
        return head;
        
        
        
    }
};