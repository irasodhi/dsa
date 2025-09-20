#include <iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(int data){

        this->data=data;
        this->next=NULL;

    }
};
void insert(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void iat(Node* &tail,int d ){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void iap(int pos,)
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;



    }
    cout<<endl;



}

int main() {
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node*head=node1;
    Node*tail=node1;
    insert(head,12);
    insert(head,15);
    insert(head,17);
    iat(tail,12);
    iat(tail,15);
    iat(tail,17);
    print(head);
}