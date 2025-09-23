// // #include <iostream>
// // using namespace std;

// // struct Node {
// //     int data;
// //     Node* next;

// //     Node(int val) {
// //         data = val;
// //         next = nullptr;
// //     }
// // };

// // int main() {
// //     Node* node1 = new Node(10);
// //     Node* node2 = new Node(20);

// //     node1->next = node2;

// //     cout << "Node 1 data: " << node1->data << endl;
// //     cout << "Node 2 data (via node1->next): " << node1->next->data << endl;

// //     delete node1;
// //     delete node2;

// //     return 0;
// // }



// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// class List{

// Node* head;
// Node* tail;

// public:
// List(){
//     head=tail=NULL;
// }

// void push_front(int val){
// Node *newnode=new Node(val);
// if(head==NULL){
//     head=tail=newnode;
//     return;
// }
// else{
//     newnode->next=head;
//     head=newnode;
// }
// }

// void push_back(int val){
//     Node *newnode=new Node(val);
//     if(head==NULL){
//         head=tail=newnode;
//     }
//     else{
//         tail->next=newnode;
//         tail=newnode;

//     }
// }
// void pop_front(int val){
//  if(head==NULL){
//     cout<<"linked list is empty"<<endl;
//     return;
//  }
//  Node* temp=head;
//  head=head->next;
//  temp->next=head;

//  delete temp;



// }

// void pop_back(){
//     if(head==NULL){
//         cout<<"ll is empty"<<endl;
//         return;
//     }
//     Node* temp=head;
    
//     while(temp->next!=tail){
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     delete tail;
//     tail=temp;  
// }

// void reverse(){
//     Node* prev=NULL;
//     Node* next=NULL;
//     Node* current=head;
//     tail=head;
//     while(current!=NULL){
//         next=current->next;
//         current->next=prev;
//         prev=current;
//         current=next;
//     }
//     head=prev;
// }
// void printL(){
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;  
// }

// Node *findmiddle(){
//     if(head==NULL){
//         return NULL;
//     }
//     Node *slow=head;
//     Node *fast=tail;
// }
// };
// int main(){
// List l1;

// l1.push_front(2);
// l1.push_front(9);
// l1.push_back(8);
// l1.printL();

// l1.pop_back();
// }


// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
//     List() {
//         head = tail = NULL;
//     }

//     void push_front(int val) {
//         Node* newnode = new Node(val);
//         if (head == NULL) {
//             head = tail = newnode;
//             return;
//         }
//         newnode->next = head;
//         head = newnode;
//     }

//     void push_back(int val) {
//         Node* newnode = new Node(val);
//         if (head == NULL) {
//             head = tail = newnode;
//         } else {
//             tail->next = newnode;
//             tail = newnode;
//         }
//     }

//     void pop_front() {
//         if (head == NULL) {
//             cout << "Linked list is empty" << endl;
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         if (head == NULL) tail = NULL;
//         delete temp;
//     }

//     void pop_back() {
//         if (head == NULL) {
//             cout << "ll is empty" << endl;
//             return;
//         }
//         if (head == tail) { // only one element
//             delete head;
//             head = tail = NULL;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != tail) {
//             temp = temp->next;
//         }
//         temp->next = NULL;
//         delete tail;
//         tail = temp;
//     }

//     Node* reverse(Node* head) {
//         Node* prev = nullptr;
//         Node* next;
//         Node* current = head;
//         tail = head;
//         while (current != NULL) {
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }
//         return prev;
//     }

//     bool isIdentical(Node* n1, Node* n2) {
//         while (n1 && n2) {
//             if (n1->data != n2->data) return false;
//             n1 = n1->next;
//             n2 = n2->next;
//         }
//         return (n1 == NULL && n2 == NULL);
//     }

//     bool isPalindrome() {
//         if (!head || !head->next) {
//             return true;
//         }
//         Node* slow = head;
//         Node* fast = head;
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         Node* head2 = reverse(slow->next);
//         slow->next = NULL;

//         bool ret = isIdentical(head, head2);

//         head2 = reverse(head2);
//         slow->next = head2;

//         return ret;
//     }

//     Node* findmiddle() {
//         if (head == NULL) {
//             return head;
//         }
//         Node* slow = head;
//         Node* fast = head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }

//     void printL() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << "->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     List l1;

//     l1.push_front(2);
//     l1.push_front(9);
//     l1.push_back(8);
//     l1.printL();

//     l1.pop_back();
//     l1.printL();

//     Node* middle = l1.findmiddle();
//     if (middle != NULL) {
//         cout << "Middle: " << middle->data << endl;
//     }

//     cout << (l1.isPalindrome() ? "Palindrome" : "Not Palindrome") << endl;
// }

// // 




// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(NULL) {}
// };

// Node* reverseLinkedList(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;
//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// bool isIdentical(Node* a, Node* b) {
//     while (a && b) {
//         if (a->data != b->data) return false;
//         a = a->next;
//         b = b->next;
//     }
//     return a == NULL && b == NULL;
// }

// bool isPalindrome(Node* head) {
//     if (!head || !head->next) return true;

//     Node* slow = head;
//     Node* fast = head;

//     // Find middle
//     while (fast->next && fast->next->next) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Reverse second half
//     Node* secondHalf = reverseLinkedList(slow->next);
//     bool palindrome = isIdentical(head, secondHalf);

//     // Restore list
//     slow->next = reverseLinkedList(secondHalf);

//     return palindrome;
// }

// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// // Function to find nth node from end
// int findn(Node* head, int n) {
//     int len = 0;
//     Node* temp = head;


//     while (temp != NULL) {
//         temp = temp->next;
//         len++;
//     }

//     if (n > len) return -1; 

//     temp = head;
//     for (int i = 1; i < len - (n - 1); i++)
//         temp = temp->next;

//     return temp->data;
// }

// int nfromend(Node *head,int N){
//     //create two pointer main and ref
//     Node *mainptr=head;
//     Node *refptr=head;
//     //if the refptr reach null then it means n is length of list
//     for(int i=1;i<N;i++){
//         refptr=refptr->next;
//         if(refptr==NULL){
//             return -1;
//         }

//     }
//     // Move both pointers until refptr reaches the end
//     while (refptr->next != NULL) {
//         mainptr = mainptr->next;
//         refptr = refptr->next;
//     }

//     return mainptr->data; // mainptr now points to Nth node from end
// }

// int main() {
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(2);
//     head->next->next->next = new Node(1);

//     cout << "Linked List: ";
//     printList(head);

//     if (isPalindrome(head))
//         cout << "It is a palindrome" << endl;
//     else
//         cout << "Not a palindrome" << endl;

//     int n = 2;
//     int nthNode = findn(head, n);
//     if (nthNode != -1)
//         cout << "The " << n << "nd node from the end is: " << nthNode << endl;
//     else
//         cout << "List is shorter than " << n << " nodes." << endl;

//      int result = nfromend(head, n);
//     if (result != -1)
//         cout << "The " << n << "nd node from the end is: " << result << endl;
//     else
//         cout << "List is shorter than " << n << " nodes." << endl;

//     return 0;
// }




#include <iostream>
using namespace std;



class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }


};
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;


}
void insertatatil(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
    

}
void insertatmiddle(Node* &head,int p,int d){
    Node* temp=head;  
    int count=1;
    while(count<p-1){
        temp=temp->next;
        count++;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;


}






void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

int main() {
   Node* node1=new Node(10);
   cout<<node1->data;
   cout<<node1->next;
   Node* head=node1;
   Node* tail=node1;
   print(head);
   insertathead(head,12);
   print(head);
}  