#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> deg(n);
    for(int i=0; i<m; i++){
        int u,v; 
        cin>>u>>v; u--; v--;
        deg[u]++; deg[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(adj[i].size()<=1) continue;
        for(auto &x: adj[i]){
            if(deg[x]!= deg[i]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
