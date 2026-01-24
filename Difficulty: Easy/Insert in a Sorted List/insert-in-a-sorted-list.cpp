/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        
        if(head==NULL){
            return new Node(key);
        }
        
        // Insert at begining
        if(head->data > key){
            struct Node* temp = new Node(key);
            temp->next = head;
            head = temp;
            return head;
        }
        
        // Insert at middle and end
        struct Node* first = head;
        
        while(first->next != NULL && first->next->data < key){
            first = first->next;
        }
        
        struct Node*  temp = new Node(key);
        temp->next = first -> next;
        first->next = temp;
        
        return head;
        
    }
};