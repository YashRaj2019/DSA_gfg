/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        
        int count1 = 0, count2 = 0;
        
        Node*  first = head1;
        Node* second = head2;
        
        while(first != NULL){
            count1++;
            first = first->next;
        }
        
        while(second != NULL){
            count2++;
            second = second->next;
        }
        
        while(count1 > count2){
            count1--;
            head1 = head1->next;
        }
        
        while(count2 > count1){
            count2--;
            head2 = head2->next;
        }
        
        while(head1 != NULL && head2 != NULL && head1 != head2){
            head1 = head1->next;
            head2 = head2->next;
        }
        
        if(head1 && head2){
            return head1;
        }
        
        return NULL;
    }
};
