//0 based graph
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector<vector<int>>& adj){
    int V = adj.size();
    int vis[V] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>adj(n); // adjacency list to store the graph

    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = bfs(adj);
    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}