#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Input
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    int u, v;
    for(int i=0; i<m; i++){
        cin>>u>>v; u--; v--;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    //dfs
    vector<int> vis(n);
    function<void(int)> dfs = [&](int v){
        if(vis[v]) return;
        vis[v] = true;
        for(int i=0; i<adj[v].size(); i++) dfs(adj[v][i]);
        // for(auto &to: adj[v]) dfs(to);
    };

    // Searching for number of connected components
    // int num_comp=0;
    vector<int> rep; // for storing one member in each component
    for(int i=0; i<n; i++)
    {
        if(vis[i]) continue;
        // num_comp++;
        rep.push_back(i);
        dfs(i);
    }
    cout<<rep.size()-1<<'\n';
    for(int i=1; i<rep.size(); i++)
    {
        cout<<rep[0]+1<<" "<<rep[i]+1<<'\n';
    }
    return 0;
}