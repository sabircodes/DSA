//NRUTE FORCE APPROACH

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

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int vertex  , edges;
    cout<<"Enter Vertex and Edges : "<< endl;
    cin>>vertex>>edges;
    vector<pair<int,int>>adj[vertex];
    int a, b , wt;
        cout<<"Enter a ,b ,wt : "<< endl;                                               
    for(int i = 0; i < vertex ; i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }

    int parent[vertex];
    int weight[vertex];
    bool visited[vertex];
    for(int i = 0 ; i < vertex ; i++){
        weight[i] = INT_MAX ;
        visited[i] = false;

    }

    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;
    //this will give you minimum pair in log n times 


    //first intialize zero index
    parent[0] = -1;
    weight[0]=0;
    pq.push({0,0});

    while(!pq.empty()){
        int u= pq.top().second; // checking the minimum index using min heap or prioroity queue
        pq.pop();

        visited[u] = true;
        for(auto it : adj[u]){
            int v = it.first;;
            int wt = it.second;
            if(visited[v] == false && wt < weight[v]){
                weight[v] = wt;
                parent[v] = u;
                pq.push({weight[v] , v}); 

            }

        }
    }
    for(int i = 1; i < vertex ; i++){
        cout<<parent[i]<<" "<<i<<endl;
         
    }



     return 0;
}

   
    