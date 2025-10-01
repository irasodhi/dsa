// #include<iostream>
// using namespace std;

// class MyStack {

//     public:
//     int *arr;
//     int top;
//     int size;

//     MyStack(int size){
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element){
//         if(size - top > 1){
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout<< "Stack OverFlow" << endl;
//         }
//     }

//     void pop(){
//         if(top >= 0){
//             top--;
//         }
//         else{
//             cout<< "Stack UnderFlow" << endl;
//         }
//     }

//     int peek(){
//         if(top >= 0){
//             return arr[top];
//         }
//         else{
//             cout<< "Stack is Empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty(){
//         return (top == -1);
//     }
// };
// int peak() {
//     if (count == 0) {
//         cout << "stack is empty" << endl;
//         return -1;
//     }
//     return items[count - 1];
// }

// bool isEmpty() {
//     return count == 0;
// }

// void display() {
//     if (count == 0) {
//         cout << "stack is empty" << endl;
//         return;
//     }
//     cout << "stack elements from top to bottom:" << endl;
//     for (int i = count - 1; i >= 0; i--) {
//         cout << items[i] << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     static const int MAX = 100; 
//     int items[MAX];
//     int count; 

// public:
  
//     Stack() {
//         count = 0;
//     }

//     void push(int x) {
//         if (count == MAX) {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         items[count++] = x;
//     }

//     int pop() {
//         if (count == 0) {
//             cout << "Stack underflow" << endl;
//             return -1;
//         }
//         return items[--count];
//     }

//     int peak() {
//         if (count == 0) {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//         return items[count - 1];
//     }

//     bool isEmpty() {
//         return count == 0;
//     }

//     void display() {
//         if (count == 0) {
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         cout << "Stack elements from top to bottom:" << endl;
//         for (int i = count - 1; i >= 0; i--) {
//             cout << items[i] << endl;
//         }
//     }
// };

// int main() {
//     Stack s;
    
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display();

//     cout << "Top element: " << s.peak() << endl;

//     s.pop();
//     s.display();

//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// class Mystack{
//     private:
//     vector <int> items;

// public:
//     void push(int item){
//         items.push_back(item);
//         cout<<item<<"pushed into stack";

//     }
//     int pop(){
//         if(items.empty()){
//             cout<<"stack underflow";
//             return -1;
//         }
//         int topitems=items.back();
//         items.pop_back();
//         cout<<topitems<<"poped from stack"<<endl;
//         return topitems;
//     }
//     int peek(){
//         if(items.empty()){
//             cout<<"STack is empty"<<endl;
//             return -1;

//         }
//         return items.back();
//     }
//     void display(){
//         for( int num : items){
//             cout<<num;
//         }
//     }
// };


// int main() {
//     Mystack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     cout << "Top element is: " << s.peek() << endl; 
//     s.display();

//     s.pop();  
//     cout << "Top element after pop is: " << s.peek() << endl;  
//     s.display(); 

//     s.pop();  
//     cout << "Top element after pop is: " << s.peek() << endl;  
     
//     s.display();
//     s.pop();  
  
//     cout << "Peek on empty stack returns: " << s.peek() << endl;
//     s.pop();

//     return 0;



    
// }


// # include <iostream>
// #include <vector>
// using namespace std;

// class Node {
// public:
// int data;
// Node* next;

// Node(int data) {
// this->data = data;
// this->next = NULL;
// }
// };

// class MyStack {
// private:
// Node* top; 
// int size;

// public:

// MyStack( ) {
// top = NULL;
// size = 0;
// }
// ~MyStack( ) {
// while ( !isEmpty( ) ) {
// int poppedValue = top->data;
//   Node* temp=top;
//     top= top-> next;
//     delete temp;
// }
// }

// void push(int value) {
// Node* newNode = new Node(value);
// newNode->next = top; 
// top = newNode;
// cout << value << " pushed into the stack" << endl;
// size++;
// }

// int pop() {
// if (top == NULL) {
// cout << "Stack is empty! " << endl;
// return -1;
// }
// int poppedValue = top->data;
// Node* temp = top;
// top = top->next; 
// delete temp;
// size--;

// cout << poppedValue << " Popped from the stack" << endl;
// return poppedValue;
// }


// int peek( ) {
// if (top == NULL) {
// cout << "Stack is empty \n";
// return -1;
// }
// return top-> data;
// }
// bool isEmpty(){
//     return top==NULL;

// }
// int getSize(){
//     return size;
// }
// void display(){
//     if(isEmpty()){
//         cout<<"stack is empty";
//         return;
//     }
//     Node* curr=top;
//     while(curr!=NULL){
//         cout<<curr->data;
//         curr=curr->next;
//         cout<<endl;
//     }
// }
// };
// int main() {
//     MyStack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display();

//     cout << "Peek: " << s.peek() << endl;

//     s.pop();
//     s.display();

//     cout << "Size: " << s.getSize() << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main() {
//    vector <int> arr={4,-1,3,8,12,26};
//    stack <int> s;
//    vector<int>ans(arr.size(),0);
//    for(int i=ans.size()-1;i>=0;i--){
//     while(s)
//     if(s.empty()){


//     }
//     else{
//         ans[i]=s.top();
//     }
//     s.push(arr[i]);

//    }
//    for(int val:ans){
//     cout<<val<<" ";
//    }
//    cout<<endl;
// }

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main() {
//     const int n=5;
//     int arr[n]={4,5,1,6,7};
//     stack <int> s;

//     vector <int>ans(n,0);
//     for(int i=0;i<n;i++){
//         while(s.size()>0 && s.top()>=arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             ans[i]=1;
//         }
//         else{
//             ans[i]=s.top();
//         }
//         s.push(arr[i]);
         
 
//     }
//     cout << "Nearest smaller to left: ";
//        for (int i = 0; i < n; i++) {
//         cout << ans[i] << " ";
//     }
// }



// #include <iostream>
// #include <stack>

// using namespace std;
// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;
//     Stack(int size){
//         this->size=size;
//         arr= new int[size];
//         top=-1;


//     }
//     void push(int element){
//         if(size-top>1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"Stack overflow";
//         }
//     }
//     void pop(){
//         if(top>=0){
//             top--;
//         }
//         else{
//             cout<<"Stack underflow";
//         }
//     }
//     int peek(){
//         if(top>=0){
//             return arr[top];
//         }
//         else{
//             cout<<"satck is empty";
//         }
//     }
//     bool isempty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main() {
// Stack st(5);
// st.push(22);
// st.push(78);
// cout<<st.peek();


// }

// #include <iostream>
// #include <stack>
// #include <string>
// #include <cmath>
// using namespace std;

// bool isOperator(char c) {
//     return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
// }

// int evaluate(int a, int b, char op) {
//     switch(op) {
//         case '+': return a + b;
//         case '-': return a - b;
//         case '*': return a * b;
//         case '/': return a / b;
//         case '^': return pow(a, b);
//     }
//     return 0;
// }

// int prefixEvaluation(string expr) {
//     stack<int> st;
//     // traverse from right to left
//     for (int i = expr.size()-1; i >= 0; i--) {
//         char c = expr[i];
        
//         if (c == ' ') continue;  // skip spaces

//         if (isdigit(c)) {
//             st.push(c - '0');  // convert char to int
//         }
//         else if (isOperator(c)) {
//             int op1 = st.top(); st.pop();
//             int op2 = st.top(); st.pop();
//             int res = evaluate(op1, op2, c);
//             st.push(res);
//         }
//     }
//     return st.top();
// }

// int main() {
//     string expr = "-+9*23 8";  // equivalent to: (9 + (2*3)) - 8
//     cout << "Result = " << prefixEvaluation(expr) << endl;
//     return 0;
// }







// #include <iostream>
// #include <stack>
// using namespace std;

// int prefix(string s){

//     stack<int> stack;

//     for(int i = s.length()-1; i >= 0; i--){
//         if(s[i] >= '0' && s[i] <= '9'){
//             stack.push(s[i] - '0');
//         }
//         else{
//             int operand1 = stack.top(); stack.pop();
//             int operand2 = stack.top(); stack.pop();

//             switch(s[i]){
//                 case '+':
//                     stack.push(operand1 + operand2);
//                     break;
//                 case '-':  
//                     stack.push(operand1 - operand2);
//                     break;
//                 case '*':
//                     stack.push(operand1 * operand2);
//                     break;
//                 case '/':
//                     stack.push(operand1 / operand2);
//                     break;
//                 default:
//                     cout << "Invalid operator: " << s[i] << endl;
//             }
//         }
//     }
//     return stack.top();
// }

// int main(){
//     // string expr;
//     // cout << "Enter prefix expression: ";
//     // cin >> expr;

//     // cout << "Result = " << prefix(expr) << endl;
//     // return 0;

//     int result=prefix("46+2/5*7+");
//     cout<<result; 
// }



#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cin>>str;
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
}