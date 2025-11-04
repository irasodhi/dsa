

// #include <iostream>
// #include<vector>
// #include<queue>
// using namespace std;


// class Node{
//     public:
//     int v;
//     Node* left;
//     Node* right;
//     Node(int d){
//         v=d;
//         left=right=NULL;
//     }
   
// };
 
//     Node *buildtree(vector<int> &preorder){
//         static int indx=-1;
//         indx++;
//         if(preorder[indx]==-1){
//             return NULL;
//         }
//         Node *root=new Node(preorder[indx]);
//         root->left=buildtree(preorder);
//         root->right=buildtree(preorder);
//         return root;
//     };
// void preorder(Node *root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->v<<" ";
//     preorder(root->left);
//     preorder(root->right);


// };
// void inorder(Node *root){
//        if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->v<<" ";
//     inorder(root->right);
// };
// void postorder(Node *root){
//        if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->v<<" ";
// };
// void levelordertraversal(Node *root){
//     queue <Node*>q;
//     q.push(root);
//     q.push(NULL);
//     while(q.size()>0){
//         Node *curr=q.front();
//         q.pop();
    
//         if(curr==NULL){
//             if(!q.empty()){
//                 cout<<endl;
//                 q.push(NULL);
//                 continue;
//             }
//             else{
//                 break;
//             }
//         }
//         cout<<curr->v<<" ";
//         if(curr->left!=NULL){
//             q.push(curr->left);
//         }
//         if(curr->right!=NULL){
//             q.push(curr->right);
//         }
    
    
//     }
//     cout<<endl;
    
// }







// int main() {
//  vector <int> sequence={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//  Node* root=buildtree(sequence);
//  preorder(root);
//  cout<<endl;
//  inorder(root);
//  cout<<endl;
//  postorder(root);
//  cout<<endl;
//  levelordertraversal(root);
// }

// #include <iostream>
// #include <vector>
// using namespace std;


// class Node{
//     public:
//     int d;
//     Node* left;
//     Node*right;
//     Node(int v){
//         d=v;
//         left=right=NULL;
//     }
// };
// Node *buildtree(vector <int>preorder){
//     static int indx=-1;
//     indx++;
//     if(preorder[indx]==-1){
//         return NULL;
//     }
//     Node * root=new Node(preorder[indx]);
//     root->left=buildtree(preorder);
//     root->right=buildtree(preorder);
//     return root;


// };
// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftht=height(root->left);
//     int rightht=height(root->right);
//     return max(leftht,rightht)+1;
// };
// int count(Node*root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftcount=count(root->left);
//     int rightcount=count(root->right);
//     return leftcount+rightcount+1;
// }
// int sumofnodes(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftsum=sumofnodes(root->left);
//     int rightsum=sumofnodes(root->right);
//     return leftsum+rightsum+root->d;

// }

// int main() {
//     vector <int> sequence={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node* root=buildtree(sequence);
//     cout<<height(root)<<endl;
//     cout<<count(root)<<endl;
//     cout<<sumofnodes(root)<<endl;


// }















// #include <iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*left;
//     Node*right;
//     Node(int v){
//         data=v;
//         left=right=NULL;
//     }

// };
// Node *buildtree(vector <int> &preorder){
//     static int indx=-1;
//     indx++;
//     if (preorder[indx]==-1){
//         return NULL;
//     }
//     Node* root=new Node(preorder[indx]);
//     root->left=buildtree(preorder);
//     root->right=buildtree(preorder);
//     return root;
// }




// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;


// void createEdge(vector<vector<int>> &adjMatrix, int source, int destination) 
// {
   
//     adjMatrix[source][destination] = 1;
//     adjMatrix[destination][source] = 1;
//     return;
// }


// void displayMatrix(vector<vector<int>> &adjMatrix) 
// {
//     int V = adjMatrix.size();  
     
//     for(int i = 0; i < V; i++) {
      
//         for(int j = 0; j < V; j++) {
//             cout <<adjMatrix[i][j];
//         }
//         cout << endl; 
//     }
// }

// int main() 
// {
     
//     int V = 5;

    
//     vector<vector<int>> adjMatrix(V, vector<int>(V, 0));
 
//     createEdge(adjMatrix, 0, 1);
//     createEdge(adjMatrix, 0, 4);
//     createEdge(adjMatrix, 1, 2);
//     createEdge(adjMatrix, 1, 3);
//     createEdge(adjMatrix, 1, 4);
//     createEdge(adjMatrix, 2, 3);
//     createEdge(adjMatrix, 3, 4);
 
//     cout << "Adjacency Matrix:" << endl;
//     displayMatrix(adjMatrix);

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <queue>
// #include <map>
// using namespace std;



// class Node{
//     public:
//     int d;
//     Node* left;
//     Node* right;
//     Node(int v){
//         d=v;
//         left=right=NULL;
//     }
    
// };
// Node *buildtree(vector <int>&preorder ){
//     static int indx=-1;
//     indx++;
//     if(preorder[indx]==-1){
//         return 0;
//     }
//     Node* root=new Node(preorder[indx]);
//     root->left=buildtree(preorder);
//     root->right=buildtree(preorder);
//     return root;

// };
// void topview(Node *root){
//     queue<pair<Node*,int>>q;
//     map<int,int>m;
//     q.push({root,0});
   
//     while(q.size()>0){
//         Node* curr=q.front().first;
//         int currhd=q.front().second;
//         q.pop();
//         if(m.find(currhd)==m.end()){
//             m[currhd]=curr->d;
//         }
//         if(curr->left!=NULL){
//             q.push({curr->left,currhd-1});

//         }
//         if(curr->right!=NULL){
//             q.push({curr->right,currhd+1});
//         }
//     }
//     for(auto it:m){
//         cout<<it.second;
//     }
//     cout<<endl;


// }




// int main() {
//   vector <int> sequence={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node* root=buildtree(sequence);
//     topview(root);
// }