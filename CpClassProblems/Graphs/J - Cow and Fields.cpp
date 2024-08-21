#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    This Approach Simply Doesn't work cause if we have 2 Nodes with
    minimum path Difference and they are in path that leading to the
    nth node but we may have a node with more path difference which is 
    not connected to the nth node think of a list.
    Failed Test Case:
    12 11 3
    1 3 7
    1 2
    2 3
    3 4
    4 5
    5 6
    6 12
    1 8
    8 9
    9 10
    10 11
    11 7
    */

    // int n, m, k; cin>>n>>m>>k;
    // vector<int> spl_fld(k);
    // for(auto &x: spl_fld){
    //     cin>>x; x--;
    // }
    // vector<vector<int>> adj(n);
    // for(int i=0; i<m; i++){
    //     int u, v; cin>>u>>v;
    //     u--; v--;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }
    // vector<int> lev(n), vis(n);
    // queue<int> q;
    // q.push(0);
    // lev[0] = 0;
    // vis[0] =1;
    // while(!q.empty()){
    //     int v = q.front(); q.pop();
    //     // vis[v] = 1;
    //     for(auto &x: adj[v]){
    //         if(vis[x]==0){
    //             q.push(x);
    //             lev[x] = lev[v]+1;
    //             vis[x] =1;
    //         }
    //     }
    // }
    // // for(auto &x: lev) cout<<x<<" ";
    // // cout<<lev[9];
    // int min_dif =n;
    // int n1, n2;
    // sort(spl_fld.begin(), spl_fld.end(), [&](int &a, int &b){return lev[a]<lev[b];});
    // for(int i=1; i<k; i++){
    //     // min_dif = min(spl_fld[i]-spl_fld[i-1], min_dif);
    //     if((lev[spl_fld[i]]-lev[spl_fld[i-1]])<min_dif){
    //         n1 = spl_fld[i-1];
    //         n2 = spl_fld[i];
    //         min_dif = lev[spl_fld[i]]-lev[spl_fld[i-1]];
    //     }
    // }
    // adj[n1].push_back(n2);
    // adj[n2].push_back(n1);
    // // cout<<n1<<" "<<n2;

    // vector<int> lev2(n), vis2(n);
    // queue<int> q2;
    // q2.push(0);
    // lev2[0] = 0;
    // vis2[0] =1;
    // while(!q2.empty()){
    //     int v = q2.front(); q2.pop();
    //     // vis[v] = 1;
    //     for(auto &x: adj[v]){
    //         if(vis2[x]==0){
    //             q2.push(x);
    //             lev2[x] = lev2[v]+1;
    //             vis2[x] =1;
    //         }
    //     }
    // }
    // // for(auto &x: lev2) cout<<x<<" ";

    // cout<<lev2[n-1];
    // // cout<<n1<<" "<<n2<<'\n';
    // // if(lev[n2]<lev[n1]) swap(n1, n2);
    // // int sht_dist = min(lev[n-1]-lev[0], (lev[n1] - lev[0]) + (lev[n-1] - lev[n2]) +1);
    // // cout<<sht_dist;
    // // return 0;
}





// Solution:
// #include <bits/stdc++.h>
// using namespace std;
// #define IOS                       
//     ios_base::sync_with_stdio(0); 
//     cin.tie(0);                   
//     cout.tie(0);
// #define ll long long

// vector<int> x(200010, -1);
// vector<int> y(200010, -1);

// bool cmp(int a, int b)
// {
//     return x[a] < x[b];
// }

// int main()
// {
//     IOS int n, m, k;
//     cin >> n >> m >> k;
//     vector<int> a(k);
//     for (int i = 0; i < k; ++i)
//     {
//         cin >> a[i];
//     }
//     vector<vector<int>> adj(n + 1);
//     for (int i = 0; i < m; ++i)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     queue<int> q;
//     q.push(1);
//     x[1] = 0;
//     while (q.size())
//     {
//         int v = q.front();
//         q.pop();
//         for (auto &u : adj[v])
//         {
//             if (x[u] == -1)
//             {
//                 x[u] = x[v] + 1;
//                 q.push(u);
//             }
//         }
//     }
//     q.push(n);
//     y[n] = 0;
//     while (q.size())
//     {
//         int v = q.front();
//         q.pop();
//         for (auto &u : adj[v])
//         {
//             if (y[u] == -1)
//             {
//                 y[u] = y[v] + 1;
//                 q.push(u);
//             }
//         }
//     }
//     int ans = 0;
//     int mx = -1e9;
//     sort(a.begin(), a.end(), cmp);
//     for (int i = k - 1; i >= 0; --i)
//     {
//         ans = max(ans, x[a[i]] + mx + 1);
//         mx = max(mx, y[a[i]]);
//     }
//     ans = min(x[n], ans);
//     cout << ans;
//     return 0;
// }