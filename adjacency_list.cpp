//Undirected unweighted graph using adjacency list
//Time complexity = O(m) -> m is no. of edges
//Space complexity = O(2E) -> E is no. of edges

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>adj[n+1];
    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}

/* if the graph was directed then only adj[u].push_back(v); and SC = O(E) */
/* if the graph was weighted then vector<pair<int,int>>adj[n+1] i.e node(from) -> {{node(to),edge weight}, {node(to),edge weight}} */