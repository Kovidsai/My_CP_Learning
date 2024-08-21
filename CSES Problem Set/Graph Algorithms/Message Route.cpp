#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Input
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    int u,v;
    for(int i=0; i<m; i++)
    {
        cin>>u>>v; u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //BFS
    const int inf = 1e8; // defining infinity
    queue<int> q;
    vector<int> vis(n);
    vector<int> par(n, -1);
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto &x:adj[v]){
            if(vis[x]==0){
                vis[x] = 1; 
                q.push(x);
                par[x] =v;
            }
        }
    }
    if(vis[n-1]==0) {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    vector<int> path;
    for(int v=n-1; v!=-1; v=par[v]){
        path.push_back(v);
    }
    cout<<path.size()<<'\n';
    reverse(path.begin(), path.end());
    for(auto &x:path) cout<<x+1<<" ";
    return 0;
}