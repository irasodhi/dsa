// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data=val;
//         next=NULL;

//     }
// };
// class queue{
//     Node* head;
//     Node* tail;
//     queue(){
//         head=tail=NULL;
//     }
//     void enqueue(int value){
//         Node* newNode=new Node(value);
//         if(tail==NULL){
//             head=tail=newNode;
//             return;
//         }
//         tail->next=newNode;
//         tail=newNode;
//     }
//     void dequeue(){
//         if(head==NULL){
//             cout<<"queue is empty";
//             return;
//         }
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     bool empty(){
//         return (head==NULL);
//     }
//         void display() {
//         if (head == NULL) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         Node* temp = head;
//         cout << "Queue: ";
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

  
// };

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

class Deque {
    Node* front;
    Node* rear;
public:
    Deque() {
        front = rear = nullptr;
    }
    bool isEmpty() {
        return front == nullptr;
    }
    void pushFront(int val) { 
        Node* temp = new Node(val);
        if (isEmpty()) {
            front = rear = temp;
        } else {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
    }
    void pushBack(int val) {  
        Node* temp = new Node(val);
        if (isEmpty()) {
            front = rear = temp;
        } else {
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
    }
    void popFront() {  
        if (isEmpty()) return;
        Node* temp = front;
        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
            front->prev = nullptr;
        }
        delete temp;
    }
    void popBack() { 
        if (isEmpty()) return;
        Node* temp = rear;
        if (front == rear) {
            front = rear = nullptr;
        } else {
            rear = rear->prev;
            rear->next = nullptr;
        }
        delete temp;
    }
    int getFront() {
        if (isEmpty()) return -1;
        return front->data;
    }
    int getRear() {
        if (isEmpty()) return -1;
        return rear->data;
    }
    void display() {
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    dq.pushBack(10);
    dq.pushFront(20);
    dq.pushBack(30);
    dq.display();
    dq.popFront();
    dq.display();
    dq.popBack();
    dq.display();
    cout << dq.getFront() << " " << dq.getRear() << endl;
}
