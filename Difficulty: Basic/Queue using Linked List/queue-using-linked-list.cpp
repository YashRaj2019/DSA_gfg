class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    
    Node *front, *rear;
    int count;

  public:
    myQueue() {
        // Initialize your data members
        front = rear = nullptr;
        count = 0;
    }
    
    

    bool isEmpty() {
        // check if the queue is empty
        
        return front == nullptr;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        
        if(isEmpty()){
            front = new Node(x);
            rear = front;
        }
        
        else{
            rear->next = new Node(x);
            rear = rear->next;
        }
        count++;
    }

    void dequeue() {
        // Removes the front element of the queue
        
        if(isEmpty()){
            return;
        }
        
        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
        
        if(front==nullptr){
            rear=nullptr;
        }
        
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        
        if(isEmpty()){
            return -1;
        }
        
        else{
            return front->data;
        }
    }

    int size() {
        // Returns the current size of the queue.
        
        
        return count;
    }
};
