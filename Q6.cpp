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
    cout<<"Enter number of vertices , edges and the source : "<<endl;
    cin>>n>>m>>src;

    //Creating a graph
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

    



    vector<int>ans = shortest_path(n,g,src);


    cout<<"The shortest distances from source "<<src<<" to all the vertices are  : "<<endl;
    for (int i = 1; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    

    return 0;
}