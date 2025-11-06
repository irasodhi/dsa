// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node* right;
//     Node(int v){
//         data=v;
//         left=right=NULL;
//     }
// };
// Node *insert(Node* root,int val){
//     if(root==NULL){
//         return new Node(val);
//     }
//     if(val<root->data){
//         root->left=insert(root->left,val);
//     }
//     else{
//         root->right=insert(root->right,val);
//     }
//     return root;
// }
// Node *buildbst(vector <int>arr){
//   Node *root=NULL;
//   for(int val:arr){
//     root=insert(root,val);
//   }
//   return root;
// }
// void inorder(Node*root){
//     if(!root)return;
//     inorder(root->left);
//     cout<<root->data;
//     inorder(root->right);
// }

// int main() {
//       vector<int> arr = {5, 3, 7, 2, 4, 6, 8};
//     Node* root = buildbst(arr);

//     cout << "Inorder traversal of BST: ";
//     inorder(root);
//     cout << endl;
// }



#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node* right;
    Node(int v){
        data=v;
        left=right=NULL;
    }
};
Node*insert(Node * root,int val){
    if(!root){return new Node(val);}
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node *buildbst(vector<int>arr){
    Node *root=NULL;
    for(int val:arr){
        root=insert(root,val);
        }
        return root;
}
void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(Node *root,int k){
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    if(root->data>k){
        return search(root->left,k);
    }
    else{
        return search(root->right,k);
    }
  

}
int main() {
    vector<int> arr = {5, 3, 7, 2, 4, 6, 8};
    Node* root = buildbst(arr);

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;
    cout<<search(root,8);
    return 0;
}