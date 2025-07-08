#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adjLs, vector<int>& vis){
    vis[node] = 1;
    for(auto it : adjLs[node]){
        if(!vis[it]){
            dfs(it,adjLs,vis);
        }
    }
}

int numOfProvinces(vector<vector<int>> isConnected){
    int V = isConnected.size();
    vector<vector<int>> adjLs(V);

    //change to adjacency list
    for(int i = 0;i < V;i++){
        for(int j = 0;j < V;j++){
            if(isConnected[i][j] == 1 && i != j){
                adjLs[i].push_back(j);
                adjLs[j].push_back(i);
            }
        }
    }

    vector<int> vis(V,0);
    int cnt = 0;

    for(int i = 0;i < V;i++){
        if(!vis[i]){
            cnt++;
            dfs(i,adjLs,vis);
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> isConnected(n,vector<int> (n));//adjacency matrix(n x n)

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> isConnected[i][j];
        }
        cout << endl;
    }

    int ans = numOfProvinces(isConnected);
    cout << ans;
    return 0;
}