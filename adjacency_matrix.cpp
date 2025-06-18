//Undirected unweighted graph using adjacency matrix
//Time complexity = O(m) -> m is no. of edges
//Space complexity = O(n x n) = O(n^2) -> n is no. of nodes

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int adj[n+1][m+1];
    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}

/* if the graph was directed then only adj[u][v] = 1; */
/* if the graph was weighted then adj[u][v] = wt; */