// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int val) : data(val), prev(NULL), next(NULL) {}
// };

// class DoublyLinkedList {
// private:
//     Node* head;
//     Node* tail; // Added tail pointer for O(1) push_back

// public:
//     DoublyLinkedList() : head(NULL), tail(NULL) {}

//     // Insert at front
//     void push_front(int val) {
//         Node* newNode = new Node(val);
//         if (head == NULL) { // If list is empty
//             head = tail = newNode; 
//         } else {
//             newNode->next = head; 
//             head->prev = newNode;
//             head = newNode;
//         }
//     }

//     void pop_front(){
//         if(head==NULL){
//             cout<<"DLL is empty";
//             return;
//         }
//         Node *temp=head;
//         head=head->next;
//         if(head!=NULL){
//             head->prev=NULL;
//         }
//         temp->next=NULL;
//         delete temp;

//     }
//     void pop_back(){
//         Node* temp=tail;
        
//     }
//     // Insert at end
//     void push_back(int val) {
//         Node* newNode = new Node(val);
//         if (tail == NULL) { // If list is empty
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }

//     // Display forward
//     void displayForward() {
//         Node* temp = head;
//         cout << "DLL (Forward): ";
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     // Display backward
//     void displayBackward() {
//         Node* temp = tail;
//         cout << "DLL (Backward): ";
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->prev;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     DoublyLinkedList dll;

//     dll.push_back(10);
//     dll.push_back(20);
//     dll.push_front(5);
//     dll.push_back(30);
//     dll.push_front(1);

//     dll.displayForward();   // 1 5 10 20 30
//     dll.displayBackward();  // 30 20 10 5 1

//     return 0;
// }



#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;

    }
};
class Doublylist{
    Node* head;
    Node* tail;
public:
    Doublylist(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;

        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    void pop_front(int val){
        Node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;

        }
        temp->next=NULL;
        delete temp;

    }
    void pop_back(int val){
        Node* temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";


    }

}; 

int main() {
   Doublylist dl;
   dl.push_front(1);
   dl.push_front(2);
   dl.push_front(3);
    dl.push_back(1);
   dl.push_back(2);
   dl.push_back(3);
   dl.print();

}