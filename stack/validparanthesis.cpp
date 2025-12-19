// #include <iostream>
// #include <stack>
// using namespace std;
// bool para(string exp){
//     stack <char>s;
//     for(int i=0;i<exp.length();i++){
//         char ch=exp[i];
//         if(ch =='('||ch=='{'||ch=='['){
//             s.push(ch);
//         }
//         else{
//             if(!s.empty()){
//                 char top=s.top();
//                 if((ch==')' && top=='(')||(ch=='{'&&top=='}')||(ch=='['&&top==']'))
//                 {
//                     s.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }
//         if(s.empty()){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

// }

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
   int i=0;
  
while(s[i]!='\0'){
    push(s[i]);
    i++
}
i=0;
while(!isempty()){
    s[i++]=pop();
}
return s;
}





#include <iostream>
using namespace std;

int main() {
    int count=0;
    int num=1;
    boolisprime=true;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            isprime=true;
            break;
            count++;
        }
    }
    if(isprime)count++;
}


Node nn=new Node(data);
if(head==nullptr){
    nn->n=nn;
    return nn;
}
Node *temp=head;
while(temp->next!=head){
    temp=temp->next;

}
temp->next=nn;
nn->next=head;
head=nn;
return h;






if(x==y)return;
Node*nodex=head;
Node*nodey=head;
while(nodex &&nodex->data!=x)nodex=nodex->next;
while(nodey&&nodey->data!=y)nodey=nodey->next;
if(!nodex||!nodey)return;
int temp=nodex->data;
nodex->data=nodey->data;
nodey->data=temp;


minamt(int price[],int n,int k){
    sort(arr,arr+n);
    int i=0,j=n-1,s=0;
    while(i<=j){
        s+=price[i++];
        j-=k;
    }
    return s;
}
maxamt(int price[],int n,int k){
    sort(arr,arr+n);
    int i=0,j=n-1,s=0;
    while(i<=j){
        s+=price[j--];
        i+=k;
    }
    return s;
}





node * reaar(Node* head){
    if(head==NULL||head->next=NULL)return head;
    Node* o=head;
    Node* e=head;
    Node* eh=even;
    while(e!=null &&e->next!=null){
        o->next=e->next;
        o->next->prev=odd;
        odd=odd->next;

        e->next=o->next;
        if(e->next!=nullptr){
            even->next->prev;
            e=e->next;
        }
        o->next=NULL;

        Node* temp=eh;
        while(temp->next1=NULL){
temp=temp->next;
temp->next=head;
head->prev=temp
        }
    }
}




int i=0;
while(s[i]!='\0'){
    push(s[i]);
    i++;
}
i=0;
while(!isempty()){
    s[i++]=pop();
}
return s;


if(!x||!y)return;
Node* currx=head;
Node* curry=head;
while(currx&&currx->data!=x)currx=currx->next;
while(curry&&curry->data!=y)curry=curry->next;
if(!currx||!curry)return;