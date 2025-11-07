// #include <iostream>
// using namespace std;

// struct Node
// {   int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=nullptr;
//     }
  
// };
// void travers(Node* head){
//     Node* current=head;
//     while(current!=nullptr){
//         cout<<current->data<<" ";
//         current=current->next;
//     }
//     cout<<endl;
// }
// int main() {
//   Node* head=new Node(10);
//   head->next=new Node(20);
//   head->next->next=new Node(30);
//   travers(head);
// }

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

Node* insertat(Node* head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    return newNode;
}
void travers(Node* head){
    Node* current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main() {
    Node* head=new Node(10);
  head->next=new Node(20);
  head=insertat(head,10);
  travers(head);
  
}
// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// Node* insertSorted(Node* head, int value) {
//     Node* newNode = new Node(value);
//     if (head == nullptr || head->data >= value) {
//         newNode->next = head;
//         return newNode; 
//     }
    
//     Node* current = head;
//     while (current->next != nullptr && current->next->data < value) {
//         current = current->next;
//     }
//     newNode->next = current->next;
//     current->next = newNode;
//     return head;
// }

// void traverseList(Node* head) {
//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
//     std::cout << std::endl;
// }

// int main() {
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
    
//     head = insertSorted(head, 15); // Insert 15
//     std::cout << "Sorted list: ";
//     traverseList(head);
    
//     // Clean up
//     while (head != nullptr) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }
//     return 0;
// }

