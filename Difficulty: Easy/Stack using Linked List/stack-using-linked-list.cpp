/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
    
    Node* head; //top of the stack
    int count; // size of stack

  public:
    myStack() {
        // Initialize your data members
        head = nullptr;
        count = 0;
        
    }

    bool isEmpty() {
        // check if the stack is empty
        return head == nullptr;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        count++;
    }

    void pop() {
        // Removes the top element of the stack
        if(head==nullptr){
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;
        count--;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(head == nullptr){
            return -1;
        }
        
        return head->data;
    }

    int size() {
        // Returns the current size of the stack.
        return count;
    }
};