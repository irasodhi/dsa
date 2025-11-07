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
// Node*insert(Node * root,int val){
//     if(!root){return new Node(val);}
//     if(val<root->data){
//         root->left=insert(root->left,val);
//     }
//     else{
//         root->right=insert(root->right,val);
//     }
//     return root;
// }
// Node *buildbst(vector<int>arr){
//     Node *root=NULL;
//     for(int val:arr){
//         root=insert(root,val);
//         }
//         return root;
// }
// void inorder(Node* root){
//     if(!root){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// bool search(Node *root,int k){
//     if(root==NULL){
//         return false;
//     }
//     if(root->data==k){
//         return true;
//     }
//     if(root->data>k){
//         return search(root->left,k);
//     }
//     else{
//         return search(root->right,k);
//     }
  

// }
// int main() {
//     vector<int> arr = {5, 3, 7, 2, 4, 6, 8};
//     Node* root = buildbst(arr);

//     cout << "Inorder traversal of BST: ";
//     inorder(root);
//     cout << endl;
//     cout<<search(root,8);
//     return 0;
// }
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode *prev=NULL;
//     TreeNode *first=NULL;
//     TreeNode * second=NULL;
//     void inorder(TreeNode* root){
//        if(root==NULL)return;
//        inorder(root->left);
//        if(prev!=NULL&&prev->val>root->val){
//         if(first==NULL){
//             first=prev;
//         }
//         second=root;
      
//        }
//        prev=root;
//        inorder(root->right);
        
//     }
//     void recoverTree(TreeNode* root) {
//       inorder(root);
//       int temp=first->val;
//       first->val=second->val;
//       second->val=temp;
//     }
// };
#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>*l;

    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void createEdge(int u ,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
  void bfs(){
    queue<int>Q;
    vector<bool>vist(V,false);


    Q.push(0);
    vist[0]=true;

    while(Q.size()>0){
        int u=Q.front();
        Q.pop();
cout<<u;
        for(int v : l[u]){
            if(!vist[v]){
                vist[v]=true;
                Q.push(v);
            }
        }
    }
    cout<<endl;
  }
  void dfsHelper(int u,vector<bool>&vis){
    cout<<u<<" ";
    vis[u]=true;

    for(int v:l[u]){
        if(!vis[v]){
            dfsHelper(v,vis);
        }
    }
  }

  void dfs(){
    int u=0;
    vector<bool>vis(V,false);

    dfsHelper(u,vis);
    cout<<endl;
  }

  bool helperCheck(int v,int par,vector<bool>&vis){
    vis[v]=true;
    list<int>neighbour=l[v];

    for(int V : neighbour){
        if(!vis[V]){
            if(helperCheck(V,v,vis)){
                return true;
            }
            else if(V!=par){
                return true;
            }
        }
        
    }
    return false;  
  }

  bool check(){
    vector<bool>vis(V,false);

    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(helperCheck(i,-1,vis)){
                return true;
            }
        }
    }
    return false;
  }
    void print(){
        for(int i=0;i<V;i++){
            cout<<"vertex"<<":"<<i<<"->";
            for (int x : l[i])
                cout << x << " ";
            cout << endl;
        }
        
    }
};



int main() {
    Graph a(6);
    a.createEdge(0, 1);
    a.createEdge(0, 2);
    a.createEdge(1, 3);
    a.createEdge(1, 4);
    a.createEdge(2, 5);
    cout<<"bfs:";
    a.bfs();
    cout<<"dfs:";
    a.dfs();


    
}