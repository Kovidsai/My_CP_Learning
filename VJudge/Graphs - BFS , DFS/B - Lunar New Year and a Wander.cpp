#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(void){
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n+1);
    // vector<Edge> edges(m);
    // for(auto &x: edges) {
    //     cin>>x.a>>x.b;
    //     if(x.b<x.a) swap(x.a, x.b);
    // }

    // sort(edges.begin(), edges.end(), [&](Edge &e1, Edge &e2){
    //     return e1.a<e2.a;
    // });


    for(int i=0; i<m; i++){
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for(auto &x: adj) sort(x.begin(), x.end());
    // vector<int> vis(n+1);
    // vector<int> ans;
    // vector<int> kk;
    // function<void(int)> dfs = [&](int v){
    //     if(ans.size()==n) return;
    //     if(vis[v]==0) ans.push_back(v);
    //     vis[v] = 1;
    // };
    // dfs(1);
    
    vector<int> vis(n+1), ans;
    set<int> s;
    s.insert(1);
    vis[1]=1;
    while(s.size()>0){
        int v = *(s.begin());
        ans.push_back(v);
        s.erase(s.begin());
        for(auto &x: adj[v]){
            if(vis[x]==0){
                s.insert(x);
                vis[x] =1;
            }
        }
    }
    for(auto &x: ans) cout<<x<<" ";

    return 0;
}