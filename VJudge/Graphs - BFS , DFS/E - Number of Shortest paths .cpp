#include<bits/stdc++.h>
using namespace std;
#define int long long 
int mod = 1e9+7;
signed main(void){
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> lev(n+1, -1);
    vector<int> ways(n+1);
    queue<int> q;
    q.push(1);
    ways[1] =1;
    lev[1] = 0;
    while(!q.empty()){
        int v =q.front(); q.pop();
        for(auto &x: adj[v]){
            if(lev[x]==-1){
                q.push(x);
                lev[x] = lev[v]+1;
                ways[x] = ways[v];
                // cout<<x<<" "<<ways[v]<<'\n';
            }
            else{
                if(lev[x]==lev[v]+1){
                    ways[x] += ways[v]%mod;
                    // cout<<x<<" "<<ways[x]<<'\n';
                }
            }
        }
    }
    if(lev[n]==-1) cout<<0;
    else cout<<ways[n]%mod;
    // if(lev[n]==-1){
    //     cout<<0;
    //     return 0;
    // }
    // vector<int> ways(n+1);
    // queue<int> p;
    // p.push(n);
    // while(!p.empty()){
    //     int v= p.front(); p.pop();
    //     int ff = lev[v]-1;
    //     // int ans=0;
    //     for(auto &x: adj[v]){
    //         if(lev[x]==ff){
    //             p.push(x);
    //             ways[v]++;
    //         }
    //     }
    // }
    // vector<int> lev_sums(n+1);
    // for(int i=1; i<ways.size(); i++){
    //     lev_sums[lev[i]] += ways[i] %mod;
    // }
    // cout<<*(max_element(lev_sums.begin(), lev_sums.end()));
    return 0;
}