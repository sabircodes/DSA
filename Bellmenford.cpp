#include <iostream>
#include <bits/stdc++.h>
#define I 1e6+1
using namespace std;
class Node
{
public:
    int wt;
    int u;
    int v;
    Node(int f, int s, int w8t)
    {
        u = f;
        v = s;
        wt = w8t;
    }
};

int main()
{
    int N = 6, M = 7;
    vector<Node> edges;
//       5       -2     3
    // (0 )---> (1 )--- > (2 )-->  ( 4)
    //     /        \      |-2
    //    /-3     1   \ 6 |
    //   (5)--------->(3)


	edges.push_back(Node(1,2,-2));
    edges.push_back(Node(0,1,5));
	edges.push_back(Node(1,5,-3));
	edges.push_back(Node(2,4,3));
	edges.push_back(Node(3,2,6));
	edges.push_back(Node(3,4,-2));
	edges.push_back(Node(5,3,1));

    vector<int>dis(N,I);
    int src = 0;
    dis[src] = 0;
    bool negative_cycle = false;
    for(int i = 1;i<=N-1;i++) {
        for(auto it: edges) {
            if(dis[it.u] + it.wt < dis[it.v]) {
                dis[it.v] = dis[it.u] + it.wt; 
            }
        }
    }

    // if this is loop is runned this means that negtive cylce is present
    for (auto it : edges)
    {
        for (auto it : edges)
        {
            if (dis[it.u] + it.wt < dis[it.v])
            {
                dis[it.v] = dis[it.u] + it.wt;
                negative_cycle = true;
            }
        }
    }

    if (negative_cycle == false)
    {
        for (int i = 0; i < N; i++)
        {
            cout << i << " " << dis[i] << endl;
        }
    }

    return 0;
}