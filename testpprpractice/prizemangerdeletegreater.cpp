while(head!=NULL && head->data>x){
    Node* temp=head;
    head=head->next;
    delete temp;
}
Node* curr=head;
while(curr->next!=nullptr){
    if(curr->next->data>x){
        Node *temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
    }
    else{
        curr=curr->next;
    }
   
}
 return head;
