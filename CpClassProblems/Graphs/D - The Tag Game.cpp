#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> &dist, int v, int par, vector<vector<int>> &adj){
    // if(dist[v]!=-1) return;
    dist[v] = dist[par]+1;
    for(int i=0; i<adj[v].size(); i++){
        if(adj[v][i]!=par){
            dfs(dist, adj[v][i], v, adj);
        }
    }
}


int main(){
    int n, b; cin>>n>>b;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dist_bob(n+1, -1), dist_ali(n+1, -1);
    dist_ali[1]=0;
    dist_bob[b]=0;
    dfs(dist_ali, 1, 0, adj);
    dfs(dist_bob, b, 0, adj);
    int ans=0;
    for(int i=1; i<=n; i++){
        if(dist_bob[i]<dist_ali[i]){
            ans = max(ans, dist_ali[i]);
        }
    }
    cout<<2*ans;
    return 0;
}

    // }// queue<int> q;
    // q.push(1);
    // dist_ali[1]= 0;
    // while(!q.empty()){
    //     int v=q.front(); q.pop();
    //     for(auto &x:adj[v]){
    //         if(dist_ali[x]==-1){
    //             dist_ali[x] = dist_ali[v]+1;
    //             q.push(x);
    //         }
    //     }
    // }
    // queue<int> qb;
    // qb.push(b);
    // while(!qb.empty()){
    //     int v=qb.front(); q.pop();
    //     for(auto &x:adj[v]){
    //         if(dist_bob[x]==-1){
    //             dist_bob[x] = dist_bob[v]+1;
    //             qb.push(x);
    //         }
    //     }
    // }


    // vector<int> leaf_dis(n+1);
    // dfs2(leaf_dis, 1, 0, adj);

    // for(auto &x:dist_bob) cout<<x<<" ";
    // for(int i=2; i<=n; i++){
    //     if(dist_bob[i]<dist_ali[i]){
    //         ans = max(ans, dist_ali[i]+ leaf_dis[i]);
    //     }
    // }
// int dfs2(vector<int> &leaf_dis, int v, int par, vector<vector<int>> adj){
//     // if(adj[v].size()==1 && v!=1) return 0;
//     int max_leaf_dis=-1;
//     for(int i=0; i<adj[v].size(); i++){
//         if(adj[v][i]!=par){
//             max_leaf_dis = max(max_leaf_dis, dfs2(leaf_dis, adj[v][i], v, adj));
//         }
//     }
//     leaf_dis[v] = max_leaf_dis+1;
//     return max_leaf_dis+1;
    
// }