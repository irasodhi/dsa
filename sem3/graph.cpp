
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
// #include <list>
// using namespace std;

// class Graph
// {
//     int V;
//     list<int> *adjList;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         adjList = new list<int>[V];
//     }

//     void createEdge(int u, int v){
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//         return;
//     }
//     void removeedge(int u,int v){
//         for(auto vertex=adjList[u].begin();vertex!=adjList[u].end();++vertex){
//             if(*vertex==v){
//                 adjList[u].erase(vertex);
               
//                 break;
//             }
//         }
//           for(auto vertex=adjList[v].begin();vertex!=adjList[v].end();++vertex){
//             if(*vertex==u){
//                 adjList[v].erase(vertex);
               
//                 break;
//             }
//         }
//     }
//     void display(){
//         for(int i=0;i<V;i++){
//             cout << i << "->";
//             for(int node : adjList[i]){
//                 cout << node << " ";
//             }
//             cout << endl;
//         }
//     }

// };

// int main() {

//     Graph g(5);
//     g.createEdge(0,1);
//     g.createEdge(0,4);
//     g.createEdge(1,2);
//     g.createEdge(1,3);
//     g.createEdge(1,4);
//     g.createEdge(2,3);
//     g.createEdge(3,4);
    
//     g.display();
//     g.removeedge(0,1);
//     g.removeedge(1,3);
    
//     g.display();

// //     return 0;
// // }

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
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(!root)return 0;
//         int ld=diameterOfBinaryTree(root->left);
//         int rd=diameterOfBinaryTree(root->right);
//         int currdiameter=height(root->left)+height(root->right);
//         return max(currdiameter,max(ld,rd));
        
//     }
//     int height(TreeNode * root){
//         if(!root)return 0;
//         int lh=height(root->left);
//         int rh=height(root->right);
//         return max(lh,rh)+1;
//     }




// #include <iostream>
// #include<queue>
// #include<vector>
// #include<list>

// using namespace std;
// class Graph{
//     int V;
//     list<int>*l;
//     public:
//     Graph(int V){
//         this->V=V;
//         l=new list<int>[V];
//     }
//     void addedge(int u,int v){
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }
//     void bfs(){
//         queue<int>q;
//         vector<bool>vis(V,false);
//         q.push(0);
//         vis[0]=true;
//         while(q.size()>0){
//             int u=q.front();
//             q.pop();
//             cout<<u<<" ";
//             for(int v:l[u]){
//                 if(!vis[v]){
//                     vis[v]=true;
//                     q.push(v);
//                 }
//             }
//         }

//         cout<<endl;
//     }
//     void dfshelper(int u,vector<bool>&vis){
//       cout<<u<<" ";
//       vis[u]=true;
//       for(int v:l[u]){
//         if(!vis[v]){
//             dfshelper(v,vis);
//         }
//       }
//     }
//     void dfs(){
//         int src=0;
//         vector<bool>vis(V,false);
//         dfshelper(src,vis);
//     }
//     bool iscycle(int src,int par,vector<bool>&vis){
//         vis[src]=true;
//         list<int>neighbors=l[src];
//         for(int v:neighbors){
//             if(!vis[v]){
//                 if (iscycle(v,src,vis)){
//                     return true;
//                 }
//             }
//             else if(v!=par){
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool isCycle(){
//         vector<bool>vis(V,false);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(iscycle(i,-1,vis)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// int main() {
//    Graph g(5);
//    g.addedge(0,1);
//    g.addedge(1,2);
//    g.addedge(1,3);
//    g.addedge(2,4);
//    g.bfs();
//    g.dfs();
//    if(g.isCycle())
//    cout<<"cycledetected";
//    else{
//     cout<<"cyclenotfound";
//    }
//    return 0;
// }