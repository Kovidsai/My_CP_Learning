/*
This is incorrect we need dijkastra to solve this 


#include<bits/stdc++.h>
using namespace std;
#define int long long 
// Disjoint Set Union
struct DSU{
    int n;
    vector<int> dsu, size;
    DSU(int n): dsu(n), size(n){
        iota(dsu.begin(), dsu.end(), 0);
        for(auto &x: size) x=1;
    }
    int find_par(int a){
        if(dsu[a]==a) return a;
        return dsu[a] = find_par(dsu[a]);
    }
    void merge(int a, int b){
        a = find_par(a); b = find_par(b);
        // if(a==b) return;
        if(size[b]>size[a]) swap(a, b);
        dsu[b] = a;
        size[a] += size[b];
    }
};

struct Edge{
    int u, v, c;
};

void dfs(vector<int> &wv, vector<vector<pair<int, int>>> &adj, vector<int> &cost, int v, int par){
        if(adj[v].size()==1 && par!=-1) return;
        for(auto &x: adj[v]){
            if(x.first != par){
                if(v!=0) cost[x.first] = x.second + cost[v]-wv[v];
                else cost[x.first] = x.second;
                // if(par==0) cost[x.first] += wv[0]; 
                dfs(wv, adj, cost, x.first, v);
            }
        }
}



signed main(void){
    int n, m; cin>>n>>m;
    vector<int> wv(n);
    for(auto &x:wv) cin>>x;
    vector<Edge> edges(m);
    for(auto &x: edges) {
        cin>>x.u>>x.v>>x.c;
        x.u--; x.v--;
        x.c += wv[x.u] + wv[x.v];
    }
    sort(edges.begin(), edges.end(), [&](Edge &x, Edge &y){return x.c<y.c;});
    // kruskals Algo
    DSU ans(n);
    // vector<vector<int>> cost(n, vector<int>(n));
    vector<vector<pair<int, int>>> adj(n);
    // int cost=0; 
    for(auto &x: edges){
        if(ans.find_par(x.u)==ans.find_par(x.v)) continue;
        else {
            ans.merge(x.u, x.v); 
            adj[x.u].push_back({x.v, x.c});
            adj[x.v].push_back({x.u, x.c});
        }
    }
    vector<int> cost(n);
    dfs(wv, adj, cost, 0, -1);
    for(int i=1; i<n; i++) cout<<cost[i]<<" ";
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        cout<<i<<"-";
        for(auto &x: adj[i]) {
            cout<<x.first<<" "<<x.second<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
} */