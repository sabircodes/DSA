#include <iostream>
#include <list>
using namespace std;
class Graph
{
    int v;          // vertices
    list<int> *adj; // pointer to the adjoint list of vertices
    bool *visit;

public:
    Graph(int v)
    {
        this->v = v;
        adj = new list<int>[v];
        // visit = new bool[v];
    }

    void addEdge(int v, int val)
    {
        adj[v].push_back(val); // add element to v
    }

    void BFS(int vertice)
    {
        bool *visited = new bool[v]; // pointert to a bool array;
        // intializing all the values of the array to 0
        for (int i = 0; i < v; i++)
        {
            visited[i] = 0;
        }

        list<int> queue;
        visited[vertice] = 1;
        queue.push_back(vertice);

        list<int>::iterator itr;
        while (!queue.empty())
        {
            vertice = queue.front();
            cout << vertice << " ";
            queue.pop_front();

            for (itr = adj[vertice].begin(); itr != adj[vertice].end(); itr++)
            {
                if (!visited[*itr])
                {
                    visited[*itr] = 1;
                    queue.push_back(*itr);
                }
            }
        }
    }

    void DFS(int vertice)
    {

        visit[vertice] = true;

        cout << vertice << " ";
        list<int> adjs = adj[vertice];

        list<int>::iterator itr;
        for (itr = adjs.begin(); itr != adjs.end(); itr++)
        {
            if (!visit[*itr])
            {
                DFS(*itr);
            }
        }
    }
};
int main()
{

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "BFS is being performed: " << endl;
    cout << "BFS on VERTEX 1" << endl;
    g.BFS(1);
    cout << "DFS" << endl;
    g.DFS(2);

    return 0;
}