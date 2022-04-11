#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class node
{
public:
    int u;
    int v;
    int wt;
    node(int u, int v, int wt)
    {
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};

int findpar(int u, vector<int> parent)
{
    if (u == parent[u])
    {
        return u;
    }
    return parent[u] = findpar(parent[u], parent); // path compression
}

bool comp(node a, node b)
{
    return a.wt < b.wt;
}

void Union(int u, int v, vector<int> &parent, vector<int> &rank)
{
    v = findpar(v, parent);
    u = findpar(u, parent);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }

    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }

    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
int main()
{
    int vertices, edge;
    cout << "enter number of   edges : " << endl;
    cin >> edge ;
    cout<<"enter number of vertices : "<<endl;
    cin>> vertices;
    vector<node> edges;
    int u, v, wt;
    cout << "Enter u , v , wt " << endl;

    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }

    sort(edges.begin(), edges.end(), comp); // sorting the node based on their weights
    vector<int> parent(edge);
    vector<int> rank(edge, 0);
    for (int i = 0; i < edge; i++)
    {
        parent[i] = i;
    }

    int path_cost = 0;
    vector<pair<int, int>> my_spanning_tree;

    for (auto i : edges)
    {
        if (findpar(i.u, parent) != findpar(i.v, parent))
        {
            path_cost += i.wt;
            my_spanning_tree.push_back({i.u, i.v});
            Union(i.u, i.v, parent, rank);
        }
    }
    cout << "path cost : " << path_cost << endl;
    cout<<"The included edges are is : "<<endl;
    for (auto it : my_spanning_tree)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}