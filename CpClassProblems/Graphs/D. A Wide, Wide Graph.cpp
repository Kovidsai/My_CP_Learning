#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u, v; cin>>u>>v;
        // u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> h1(n+1), h2(n+1);
    function<void(int, int, int, vector<int>)> dfs = [&](int v, int par, int h, vector<int> hgt){
            hgt[v] = h;
            for(auto &x:adj[v]){
                if(x!=par){
                    dfs(x, v, h+1, hgt);
                }
            }
    };
    dfs(1, 0, 0, h1);
    int v1 = 0;
    for(int i=0; i<=n; i++){
        if(h1[i]>h1[v1]){
            v1 = i;
        }
    }
    dfs(v1, 0, 0, h1);
    int v2 = 0;
    for(int i=0; i<=n; i++){
        if(h1[i]>h1[v2]){
            v2 = i;
        }
    }
    dfs(v2, 0, 0, h2);
    vector<int> mx_dist(n+1);
    for(int i=0; i<=n; i++){
        
    }
    return 0;
}