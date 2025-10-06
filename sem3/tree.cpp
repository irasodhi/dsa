// #include <iostream>
// using namespace std;

// int *queueArr;       // dynamic array for queue
// int front = -1;
// int rear = -1;
// int size = 0;
// int capacity;        // now it's a variable

// // Enqueue function
// void enqueue(int value) {
//     if (size == capacity) {
//         cout << "Queue is Full!\n";
//         return;
//     }
//     if (front == -1) front = 0;
//     rear = (rear + 1) % capacity;
//     queueArr[rear] = value;
//     size++;
//     cout << value << " enqueued\n";
// }

// // Dequeue function
// void dequeue() {
//     if (size == 0) {
//         cout << "Queue is Empty!\n";
//         return;
//     }
//     cout << queueArr[front] << " dequeued\n";
//     if (front == rear) {
//         // Queue becomes empty
//         front = rear = -1;
//     } else {
//         front = (front + 1) % capacity;
//     }
//     size--;
// }

// // Display function
// void display() {
//     if (size == 0) {
//         cout << "Queue is Empty!\n";
//         return;
//     }
//     cout << "Queue: ";
//     for (int i = 0; i < size; i++) {
//         cout << queueArr[(front + i) % capacity] << " ";
//     }
//     cout << "\n";
// }

// int main() {
//     cout << "Enter capacity of queue: ";
//     cin >> capacity;

//     queueArr = new int[capacity]; // dynamically allocate memory

//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     display();

//     dequeue();
//     display();

//     enqueue(40);
//     enqueue(50);
//     display();

//     dequeue();
//     dequeue();
//     display();

//     delete[] queueArr; // free memory
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
static int indx=-1;
Node* buildtree(vector<int>preorder){
    indx++;
    if(preorder[indx]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[indx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;


}
void preorder(Node* root){
    if(root==NULL){
    return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main() {
    vector <int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;


}