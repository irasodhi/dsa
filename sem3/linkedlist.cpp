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




// #include <iostream>
// using namespace std;



// class Node {
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }


// };
// void insertathead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;


// }
// void insertatatil(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;
    

// }
// void insertatmiddle(Node* &head,int p,int d){
//     Node* temp=head;  
//     int count=1;
//     while(count<p-1){
//         temp=temp->next;
//         count++;
//     }
//     Node* nodetoinsert=new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;


// }






// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp=temp->next;
//     }
// }

// int main() {
//    Node* node1=new Node(10);
//    cout<<node1->data;
//    cout<<node1->next;
//    Node* head=node1;
//    Node* tail=node1;
//    print(head);
//    insertathead(head,12);
//    print(head);
// }  




// #include <iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };
// void insertathead(Node* &head,int val){
//     Node *newnode=new Node();
//     newnode->data=val;
//     newnode->next=head;
//     head=newnode;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;

//     }
// }

// int main() {
//     Node *head=NULL;
//     insertathead(head,10);
//     insertathead(head,20);
//     insertathead(head,30);
//     display(head);
// }


// #include <iostream>
// using namespace std;


// struct Node{
//     int data;
//     Node* next;
// };
// void insertathead(Node &head,int val){
//     Node *newnode=new Node();
//     newnode->data=val;
//     newnode->next=head;
//     head=newnode;
// }
// void insertattail(Node &head,int val){
//     Node *newnode=new Node();
//     newnode->data=val;
//     newnode->next=NULL;
//     if(head==NULL){
//         head=newnode;
//         return;
//     }
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newnode;
// }

// int main() {
//    Node head=NULL;
//    insertathead(head,10);
//     insertAtTail(head, 20);
//     insertAtTail(head, 30);
//     display(head);

// }
// #include <iostream>
// using namespace std;

// int main() {
//     string s="hello";
//     string rev="";
//     for(int i=s.length();i>=0;i--){
//         rev+=s[i];
//     }
//     cout<<rev;
// }


// #include <iostream>
// using namespace std;
// bool isprenst(int arr[],int n,int tar){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target)
//         return true;
//     }
//     return false;
// }

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    string s;
//    cout<<"enter string";
//    cin>>s;
//    int n=s.length();
//    for(int i=0;i<n/2;i++){
//     char temp=s[i];
//     s[i]=s[n-i-1];
//     s[n-i-1]=temp;
//    }
//    cout<<s;

// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int temp[n];
//     int k=0;
//     for(int i=0;i<n;i++){
//         bool duplicate=false;
//         for(int j=0;j<n;j++){
//             if(arr[i]==temp[j]){
//                 duplicate=true;
//                 break;
//             }
//         }
//         if(!duplicate){
//             temp[k++]=arr[i];
//         }
//     }
//     for(int i=0;i<k;i++){
//         cout<<temp[i]<<" ";
//     }

   
// }


// #include <iostream>
// using namespace std;

// int main() {
//      int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     cout<<arr[i];
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int v;
//     int p;
//     cin>>v>>p;
//      int arr[100];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     for(int i=n;i>p;i--){
//         arr[i]=arr[i-1];
//         arr[pos]=val;
//         n++;
//     }
//        cout << "After insertion: ";
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;


// }

// #include <iostream>
// #include <stack>
// using namespace std;


// bool isbalanced(string s){
//     stack<char>st;
//     for(char c:s){
//         if(c=='{'||c=='['||c=='('){
//             st.push(c);
//         }
//         else if(c==')'||c==']'||c=='}'){
//             if(st.empty()) return false;
//             char top=st.top();
//             st.pop();
        
//             if ((c == ')' && top != '(') ||
//                 (c == '}' && top != '{') ||
//                 (c == ']' && top != '[')) {
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }







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
// Node* reverse(Node *head){
//     Node* prev=NULL;
//     Node* curr=head;
//     while(curr!=NULL){
//         Node* next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }
// void print(Node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// int main() {
       
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     print(head);
//     cout<<endl;
//     head=reverse(head);
//     print(head);

// }
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int d;
//     Node* next;
//     Node(int v){
//         d=v;
//         next=NULL;
//     }
// };
// Node * findmidle(Node* head){
//     Node* s=head;
//     Node* f=head;
//     Node* prev=NULL;
//     while(f!=NULL&&f->next!=NULL){
//         f=f->next->next;
//         prev=s;
//         s=s->next;
//     }
//    prev->next=s->next;
//     delete s;
// }
// int main() {
    
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     Node* mid=findmidle(head);
//     cout<<mid->data;
// }


// #include <iostream>
// using namespace std;
// class Stack{
//     public:
//     int arr[100];
//     int top;
//     public:
//     Stack(){
//         top=-1;
//     }
//     void push(int x){
//         if(top==99){
//             cout<<"stack overflow";
//         }
//         arr[++top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"stack underflow";
//             return;
//         }
//         top--;
//     }
//     int peek(){
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
    
//     void display() {
//         for(int i = top; i >= 0; i--)
//             cout << arr[i] << " ";
//         cout << endl;
//     }


// }

// int main() {
//       Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.display();
//     st.pop();
//     st.display();
// }
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next=NULL;
//     Node(int val){
//         data=val;
//         next=nullptr;
//     }
// };
// void insert(Node*&head,int val){
//     Node* newnode=new Node(val);
//     if(head==nullptr){
//         head=newnode;
//         return;
//     }
//     Node *temp=head;
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=newnode;
// }
// void makecircular(Node*head){
//     if(head==nullptr)return;
//     Node* temp=head;
//      while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=head;

// }
// bool iscircular(Node* head){
//     Node *s=head;
//     Node* f=head;
//     while(f!=nullptr&&f->next!=nullptr){
//         f=f->next->next;
//         s=s->next;
//     }
//     if(s==f){return true;}
//     return false;

// }
// int main() {
//     Node* head=nullptr;
//     insert(head,10);
//     insert(head,20);
//     insert(head,30);
//     makecircular(head);
//     if(iscircular(head)){
//         cout<<"listiscircular";
//     }
//     else{
//         cout<<"list is not circular";
//     }

// }


// #include <iostream>
// using namespace std;
// void bubblesort(int arr[],int n){
//     bool swapped;
//     for(int i=0;i<n-1;i++){
//         swapped=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//     }
//     if(!swapped)break;




    
// }

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void prevsmall(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int prev=-1;
//         for(int j=i-1;j>=0;j--){
//             if(arr[j]<arr[i]){
//                 prev=arr[j];
//                 break;
//             }
//         }
//         cout<<prev<<" ";
//     }
// }
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;


// int main() {
//     int r;
//     int c;
//     cin>>r>>c;
//     int mat[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>mat[i][j];
//         }
//     }
//      for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             cout<<mat[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int m;
//     cin>>m;
//     int arr[m][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++ )
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int m;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//             cout<<255-arr[i][j];
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// #include<stack>
// using namespace std;
// void demand(int demand[],int n){
//     vector<int>ans(n,-1);
//     stack<int>st;
//     for(int i=n;i>0;i--){
//         while(!st.empty()&&demand[i]>=st.top())st.pop();
//         ans[i]=st.empty()?-1:st.top();
//         st.push(demand[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i];
//         if(i<n-1)cout<<" ";
//     }
// }


// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int r,c;
//     cin>>r>>c;
//     vector<vector<int>>seats(r,vector<int>(c));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>seats[i][j];
//         }
//     }
//     int k;
//     cin>>k;
//     bool found=false;
    
//     for(int i=0;i<r;i++){
//         int count=0;
//         for(int j=0;j<c;j++){
//             if(seats[i][j]==0){
//                 count++;
//             }
//             else{
//                 count=0;
//             }
//         }
//         if(count==k){
//             cout<<"available"<<i+1;
//             cout<<"starting"<<j-k+2;
//             found=true;
//             break;
//         }
//         if(found)break;

//     }

// // }

// Node* deletegreater( Node*head,int x){
   
   
//     while(head!=NULL&&head->data>X){
//         Node*temp=head;
//         head=head->next;
//         delete temp;
//     }
//      if(head==NULL)return NULL;
//      Node* curr=head;
//     while(curr->next!=nullptr){
//         if(curr->next->data>X){
//             Node*temp=curr->next;
//             curr->next=curr->next->next;
//             delete temp;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
//     return head;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    vector<int> freq(26,0);
//    for(char c:str){
//     freq[c]++;
//    }
//    for(int i=0;i<26;i++){
//     if(freq[i]>0){
//         cout<<char('a'+i)<<freq[i]<<" ";
//     }
//    }
// }
// #include <iostream>
// #include<string>
// using namespace std;
// stringcisercipher(string mess,int k){
//     string res="";
//     for(char ch:mess){
//     if(ch>='A' && ch<='Z'){
//         char shif=(ch='A'+k)%26+'A';
//         res+=shif;
//     }
//     else if(ch>='a'&&c<='z'){
//         char shift=(ch='a'+k)%26+'A';
//         res+=shift
//     }
//     else{
//         res+=ch;
//     }
// }
// }


//count the leaders

// int count=0;
// int mini=INT_MIN;
// for(int i=n-1;i>=0;i--){
//     if(arr[i]>mini){
//         mini=arr[i];
//         count++;
//     }
//     return count;
// }

Node* findlast(Node* head, int n) {
    if (head == NULL || n <= 0) return head;

    Node* fast = head;
    Node* slow = head;

     
    int count = 0;
    while (count < n && fast != NULL) {
        fast = fast->next;
        count++;
    } 
    if (fast == NULL) { 
        while (slow->next != NULL) slow = slow->next;
        return slow;   
    }

     
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}





(char*s){
    int i=0;
    
}while(s[i]!='\0'){
    push(s[i]);
    i++;
}
i=0;
while(!isEmpty()){
    s[i++]=pop();
}
return s;




prime(int n){
    int num=1;
    int count=0;
    while(count<n){
    
    num++;
    isprime=true;
    if(num<2){
        isprime=false;
    }
    for(int i=2;i*i<=n;i++){
        if(num%i==0){return false;
        break;
    }
}
if(isprime)count++

    }
return num;

}



if(x||!y)return;
int minamt(int price[],int n,int k){
    sort(price,price+n);
    i=0j=n-1s=0
    while(i<=j){
        s+=price[i++];
        j-=k;
    }
}



