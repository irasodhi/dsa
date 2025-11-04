
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

//     return 0;
// }

