#include <iostream>
#define I INT_MAX
using namespace std;
int findmin(int *weight, bool *visited, int vertices)
{
    int minindex = -1;
    for (int i = 0; i < vertices; i++)
    {
        if (!visited[i] && (minindex == -1 || weight[i] < weight[minindex]))
        {
            minindex = i;
        }
    }
    return minindex;
}

void Prims(int **edges, int vertices)
{
    int *parent = new int[vertices];
    int *weight = new int[vertices];
    bool *visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
        weight[i] = I;
    }

    parent[0] = -1;
    weight[0] = 0;

    // picking the min weight elemnt from the unvisited array
    for (int i = 0; i < vertices; i++)
    {
        int minvertex = findmin(weight, visited, vertices);
        visited[minvertex] = true;
        // explore unvisted neighbors
        for (int j = 0; j < vertices; j++)
        {
            if (edges[minvertex][j] != 0 && !visited[j])
            {
                if (edges[minvertex][j] < weight[j])
                {
                    weight[j] = edges[minvertex][j];
                    parent[j] = minvertex;
                }
            }
        }
    }
    for (int i = 0; i < vertices; i++)
    {
        // if (parent[i] < i)
        // {
        //     cout << parent[i] << " " << i << " " << weight[i] << endl;
        // }
        
        // {
            cout << i << " " << parent[i] << " " << weight[i] << endl;
        // }
    }
}
int main()
{
    int vertices;
    int e;
    cout << "Enter vertices and e";
    cin >> vertices >> e;
    int **edges = new int *[vertices];
    for (int i = 0; i < vertices; i++)
    {
        edges[i] = new int[vertices];
        for (int j = 0; j < vertices; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int x = 0; x < e; x++)
    {
        int i, j;
        int weight;
        cout << "enter i  , j and weight:" << endl;
        cin >> i >> j >> weight;

        // cin>>j;
        edges[i][j] = weight;
        edges[j][i] = weight;
    }
    cout << endl;
    Prims(edges, vertices);

    return 0;
}