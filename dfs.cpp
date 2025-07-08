#include<iostream>
#include<vector>
using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<int>& vis,vector<int>& ans){
    vis[node] = 1;
    ans.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ans);
        }
    }
}

vector<int> dfsOfGraph(int V,vector<vector<int>> adj){
    vector<int> vis(V,0);
    vector<int> ans;
    int start = 0;
    dfs(start,adj,vis,ans);
    return ans;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    
    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = dfsOfGraph(n,adj);

    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}