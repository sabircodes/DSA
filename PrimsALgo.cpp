// BRUTE FORCE APPROACH

// #include <iostream>
// #define I INT_MAX
// using namespace std;
// int findmin(int *weight, bool *visited, int vertices)
// {
//     int minindex = -1;
//     for (int i = 0; i < vertices; i++)
//     {
//         if (!visited[i] && (minindex == -1 || weight[i] < weight[minindex]))
//         {
//             minindex = i;
//         }
//     }
//     return minindex;
// }

// void Prims(int **edges, int vertices)
// {
//     int *parent = new int[vertices];
//     int *weight = new int[vertices];
//     bool *visited = new bool[vertices];
//     for (int i = 0; i < vertices; i++)
//     {
//         visited[i] = false;
//         weight[i] = I;
//     }

//     parent[0] = -1;
//     weight[0] = 0;

//     // picking the min weight elemnt from the unvisited array
//     for (int i = 0; i < vertices; i++)
//     {
//         int minvertex = findmin(weight, visited, vertices);
//         visited[minvertex] = true;
//         // explore unvisted neighbors
//         for (int j = 0; j < vertices; j++)
//         {
//             if (edges[minvertex][j] != 0 && !visited[j])
//             {
//                 if (edges[minvertex][j] < weight[j])
//                 {
//                     weight[j] = edges[minvertex][j];
//                     parent[j] = minvertex;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < vertices; i++)
//     {
//         // if (parent[i] < i)
//         // {
//         //     cout << parent[i] << " " << i << " " << weight[i] << endl;
//         // }
        
//         // {
//             cout << i << " " << parent[i] << " " << weight[i] << endl;
//         // }
//     }
// }
// int main()
// {
//     int vertices;
//     int e;
//     cout << "Enter vertices and e";
//     cin >> vertices >> e;
//     int **edges = new int *[vertices];
//     for (int i = 0; i < vertices; i++)
//     {
//         edges[i] = new int[vertices];
//         for (int j = 0; j < vertices; j++)
//         {
//             edges[i][j] = 0;
//         }
//     }
//     for (int x = 0; x < e; x++)
//     {
//         int i, j;
//         int weight;
//         cout << "enter i  , j and weight:" << endl;
//         cin >> i >> j >> weight;

//         // cin>>j;
//         edges[i][j] = weight;
//         edges[j][i] = weight;
//     }
//     cout << endl;
//     Prims(edges, vertices);

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int N=6,m=7;
	vector<pair<int,int> > adj[N]; 
	
	
	
	adj[0].push_back({1,5});
	adj[0].push_back({2,10});
	adj[0].push_back({3,100});
	adj[1].push_back({0,5});
	adj[1].push_back({4,200});
	adj[1].push_back({3,50});
	adj[2].push_back({0,10});
	adj[3].push_back({0,100});
	adj[3].push_back({4,250});
	adj[3].push_back({1,50});
	adj[4].push_back({1,200});
	adj[4].push_back({3,100});
	adj[4].push_back({5,50});
	adj[5].push_back({4,50});


	

	// adj[0].push_back({1,2});
	// adj[0].push_back({3,6});
	// adj[1].push_back({0,2});
	// adj[1].push_back({2,3});
	// adj[1].push_back({3,8});
	// adj[1].push_back({4,5});
	// adj[2].push_back({1,3});
	// adj[2].push_back({4,7});
	// adj[3].push_back({0,6});
	// adj[3].push_back({1,8});
	// adj[4].push_back({1,5});
	// adj[4].push_back({2,7});


	
	
    int parent[N]; 
      
    int key[N]; 
      
    bool mstSet[N]; 
  
    for (int i = 0; i < N; i++) 
        key[i] = INT_MAX, mstSet[i] = false; 
    
    priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;

    key[0] = 0; 
    parent[0] = -1; 
    pq.push({0, 0});

    while(!pq.empty())
    { 
        int u = pq.top().second; 
        pq.pop(); 
        
        mstSet[u] = true; 
        
        for (auto it : adj[u]) {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v]) {
                parent[v] = u;
	    key[v] = weight; 
                pq.push({key[v], v});    
            }
        }
            
    } 
    
    for (int i = 1; i < N; i++) 
        cout << parent[i] << " - " << i <<" \n"; 
	return 0;
}