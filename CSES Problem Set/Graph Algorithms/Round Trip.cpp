#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Input
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // DFS
    vector<int> vis(n);
    vector<int> path;
    function<void(int, int)> dfs = [&](int v, int par){
        for(auto x:adj[v]){
            if(vis[x]==0){
                vis[x]=1;
                dfs(x, v);
            }
            else{
                if(x!=par){
                    path.push_back(x);
                }
            }
        }
    };

    return 0;
}