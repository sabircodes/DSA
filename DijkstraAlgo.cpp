#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, source;
    cout << "Enter n , m  , source: "<< endl;
    cin >> n >> m >> source;

    vector<pair<int, int>> g[n + 1];
    g[1].push_back({2,2});
	g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});	

    // making an adjacency list for the graph
    // int a, b, wt;
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> a >> b >> wt;
    //     adj[a].push_back(make_pair(b, wt));
    //     adj[b].push_back(make_pair(a, wt));
    // }

    // writing the algorithm
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
    vector<int>distance(n+1, INT_MAX);
    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int node = pq.top().second;
        int dist = pq.top().first;
        pq.pop();
        vector<pair<int, int>>::iterator it;
        for (it = g[node].begin(); it != g[node].end(); it++)
        {
            int next_node = it->first;
            int next_dist = it->second;
            if (distance[next_node] > dist + next_dist)
            {
                distance[next_node] = dist + next_dist;
                pq.push({distance[next_node], next_node});
            }
        }
    }
    cout<<"The distance from source "<<source<<"are"<<endl;
    for(int i = 0;  i<=n ; i++){
        cout<<distance[i]<<" ";
    }
        cout<<endl;

    return 0;
}



// using set data structure
#include <iostream>
#include <climits>
#include <set>
#include <vector>

using namespace std;



vector<int>shortest_path(int n,vector<pair<int,int>>adj[],int src){   //src is the starting/source node
    vector<int>dist(n+1,INT_MAX);
    set<pair<int,int>>st;

    dist[src] = 0;


    st.insert({dist[src],src});



    while(!st.empty()){
        pair<int,int> node = *st.begin();
        st.erase(st.begin());

        for(auto it: adj[node.second]){
            if(node.first + it.second < dist[it.first]){
                dist[it.first] = node.first + it.second;
                st.insert({dist[it.first],it.first});
            }
        }
    }
    
    return dist;
}



int main(){
    int n,m,src;
    cin>>n>>m>>src;

    vector<pair<int,int>>g[n+1];
    g[1].push_back({2,2});
	g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});	

    // while(m--){
    //     int x,y,w;
    //     cin>>x>>y>>w;

    //     adj[x].push_back({y,w});
    //     adj[y].push_back({x,w});
    // }



    vector<int>ans = shortest_path(n,g,src);



    for (int i = 1; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    

    return 0;
}