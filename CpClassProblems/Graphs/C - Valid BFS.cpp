#include<bits/stdc++.h>
using namespace std;
// const int N = 2e7;
int reord[200010];

// reord = {0 0 1 3 2}
//   index  0 1 2 3 4 

// bool comp(int n, int m){
//     return reord[n]<reord[m];
// }

int main(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> bfs(n);
    for(int i=0; i<n; i++){
        cin>>bfs[i];
        reord[bfs[i]] = i; 
    }

    for(int i=1; i<=n; i++){
        auto comp = [&](int a, int b){
            return reord[a]<reord[b];
        };
        sort(adj[i].begin(), adj[i].end(), comp);
    }

    queue<int> q;
    q.push(1);
    vector<int> bfsc, vis(n+1);
    vis[0]=1;
    vis[1] =1;
    while(!q.empty()){
        int v = q.front(); q.pop();
        bfsc.push_back(v);
        for(auto &x: adj[v]){
            if(vis[x]==0){
                q.push(x);
                vis[x]=1;
            }
        }
    }

    if(bfs==bfsc) cout<<"Yes";
    else cout<<"No";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define ll long long
// int relorder[200010];

// bool cmp(int a,int b){
//     return relorder[a]<relorder[b];
// }

// int main(){
//     IOS
//     int n;
//     cin>>n;
//     vector<vector<int>> adj(n+1);
//     for(int i=0;i<n-1;++i){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> a(n);
//     for(int i=0;i<n;++i){
//         cin>>a[i];
//         relorder[a[i]]=i;
//     }
//     for(int i=1;i<=n;++i){
//         sort(adj[i].begin(),adj[i].end(),cmp);
//     }
//     vector<int> ans;
//     vector<int> vis(n+1);
//     queue<int> q;
//     vis[1]=1;
//     q.push(1);
//     while(q.size()>0){
//         int v=q.front();
//         q.pop();
//         ans.push_back(v);
//         for(auto &u:adj[v]){
//             if(!vis[u]){
//                 vis[u]=1;
//                 q.push(u);
//             }
//         }
//     }
//     if(ans==a){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
//     return 0;
// }


// TLE SOL;
    // vector<int> g_bfs(n), vis(n+1), o_bfs;
    // vis[0]=1;
    // vis[1]=1;
    // for(auto &x: g_bfs) cin>>x;
    // queue<int> q; 
    // q.push(1);
    // int i=1, flag=0;
    // while(!q.empty()){
    //     int v =  q.front(); q.pop();
    //     o_bfs.push_back(v);
    //     for(int f=0; f<adj[v].size(); f++){
    //         for(int j=0; j<adj[v].size(); j++){
    //             if(vis[adj[v][j]]==0 && g_bfs[i]==adj[v][j]){
    //                 q.push(adj[v][j]);
    //                 vis[adj[v][j]] = 1;
    //                 flag = 1;
    //                 i++;
    //                 break;
    //             }
    //         }
    //         if(flag==0 && adj.size()<=1) {
    //             cout<<"No";
    //             return 0;
    //         }
    //     }
    // }

    //  if(o_bfs==g_bfs) cout<<"Yes";
    //  else cout<<"No";
