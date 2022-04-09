// GRAPH TRAVERSAL USING ADJOINT LIST

// #include <iostream>
// #include <list>
// using namespace std;
// class Graph
// {
//     int v;          // vertices
//     list<int> *adj; // pointer to the adjoint list of vertices
//     bool *visit;

// public:
//     Graph(int v)
//     {
//         this->v = v;
//         adj = new list<int>[v];
//         // visit = new bool[v];
//     }

//     void addEdge(int v, int val)
//     {
//         adj[v].push_back(val); // add element to v
//     }

//     void BFS(int vertice)
//     {
//         bool *visited = new bool[v]; // pointert to a bool array;
//         // intializing all the values of the array to 0
//         for (int i = 0; i < v; i++)
//         {
//             visited[i] = 0;
//         }

//         list<int> queue;
//         visited[vertice] = 1;
//         queue.push_back(vertice);

//         list<int>::iterator itr;
//         while (!queue.empty())
//         {
//             vertice = queue.front();
//             cout << vertice << " ";
//             queue.pop_front();

//             for (itr = adj[vertice].begin(); itr != adj[vertice].end(); itr++)
//             {
//                 if (!visited[*itr])
//                 {
//                     visited[*itr] = 1;
//                     queue.push_back(*itr);
//                 }
//             }
//         }
//     }

//     void DFS(int vertice)
//     {

//         visit[vertice] = true;

//         cout << vertice << " ";
//         list<int> adjs = adj[vertice];

//         list<int>::iterator itr;
//         for (itr = adjs.begin(); itr != adjs.end(); itr++)
//         {
//             if (!visit[*itr])
//             {
//                 DFS(*itr);
//             }
//         }
//     }
// };
// int main()
// {

//     Graph g(4);
//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 2);
//     g.addEdge(2, 0);
//     g.addEdge(2, 3);
//     g.addEdge(3, 3);

//     cout << "BFS is being performed: " << endl;
//     cout << "BFS on VERTEX 1" << endl;
//     g.BFS(1);
//     cout << "DFS" << endl;
//     g.DFS(2);

//     return 0;
// }

// GRAPH  USING ADJOINT MATRIX

#include <iostream>
using namespace std;
class Graph
{
private:
    int vertex;
    int **adj;

public:
    Graph(int vertex)
    {
        this->vertex = vertex;
        adj = new int *[vertex]; // dynamically allocating memory
        for (int i = 0; i < vertex; i++)
        {
            adj[i] = new int[vertex];
            for (int j = 0; j < vertex; j++)
            {
                adj[i][j] = 0;
            }
        }
    }

    // adding edges
    void addEdge(int i, int j)
    {
        adj[i][j] = 1;
        adj[j][i] = 1;
    }
    void Remove_Edge(int i, int j)
    {
        adj[i][j] = 0;
        adj[j][i] = 0;
    }

    void toString()
    {
        for (int i = 0; i < vertex; i++)
        {
            cout << i << " : ";
            for (int j = 0; j < vertex; j++)
            {
                cout << adj[i][j] << " ";
                // cout << endl;
            }
            cout << endl;
        }
    }

//    void DFS(int **adj, int vertex, int start, bool *visited)
//     {
        
//         cout << start<<endl;
//         visited[vertex] = true;

//         for(int i = 0; i < vertex; i++){
//             if(i==start){
//                 continue;
//             }
//             if(adj[start][i]==1  ){
//                 if(visited[i]){
//                     continue;
//                 }
//                 DFS(adj , vertex , i , visited);
                
//              }
//         }
//     }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);

    g.toString();
    
    return 0;
}