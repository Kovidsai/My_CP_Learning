#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
#define int long long
signed main(void){
    int n; cin>>n;
    vector<pair<int, int>> nd(n);
    for(auto &x: nd) cin>>x.first>>x.second;
    vector<int> k(n), pw_ct(n);
    for(auto &x: pw_ct) cin>>x;
    for(auto &x: k) cin>>x;
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0; i<n; i++){
        int len = 0;
        for(int j=i+1; j<n; j++){
            // if(i==j) continue;
            len = abs(nd[i].first - nd[j].first) + abs(nd[i].second-nd[j].second);
            int c = (k[i]+k[j]) * len;
            adj[i+1].push_back({c, j+1});
            adj[j+1].push_back({c, i+1});
            }
    }
    for(int i=1; i<=n; i++){
        adj[0].push_back({pw_ct[i-1], i});
        adj[i].push_back({pw_ct[i-1], 0});
    }
    vector<int> ps;
    vector<pair<int, int>> cc;
    vector<int> vis(n+1);
    set<vector<int>> s;
    s.insert({0, 0, -1});
    int cost=0;
    while(s.size()>0){
        int w = (*s.begin())[0];
        int u = (*s.begin())[1];
        int v = (*s.begin())[2];
        s.erase(s.begin());
        if(vis[u]==1) continue;
        vis[u] = 1;
        if(u==0 && v!=-1) ps.push_back(v);
        if(v==0) ps.push_back(u);
        if(v!=0 && u!=0) cc.push_back({u, v});
        cost += w;
        // cout<<w<<'\n';
        for(auto &x: adj[u]){
            s.insert({x.first, x.second, u});
        }
    }
    cout<<cost<<'\n';
    cout<<ps.size()<<'\n';
    for(auto &x: ps) cout<<x<<" ";
    cout<<'\n';
    cout<<cc.size()<<'\n';
    for(auto &x: cc) cout<<x.first<<" "<<x.second<<'\n';

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main(void)
// {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> nd(n);
//     for (auto &x : nd)
//         cin >> x.first >> x.second;
//     vector<int> k(n), pw_ct(n);
//     for (auto &x : pw_ct)
//         cin >> x;
//     for (auto &x : k)
//         cin >> x;
//     vector<vector<pair<int, int>>> adj(n + 1);
//     for (int i = 0; i < n; i++)
//     {
//         int len = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             len = abs(nd[i].first - nd[j].first) + abs(nd[i].second - nd[j].second);
//             int c = (k[i] + k[j]) * len;
//             adj[i + 1].push_back({c, j + 1});
//             adj[j + 1].push_back({c, i + 1});
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         adj[0].push_back({pw_ct[i - 1], i});
//         adj[i].push_back({pw_ct[i - 1], 0});
//     }
//     vector<int> ps_built;
//     vector<pair<int, int>> cities_conn;
//     vector<int> vis(n + 1);
//     set<vector<int>> s;
//     s.insert({0, 0, -1});
//     int cost = 0;
//     while (s.size() > 0)
//     {
//         int w = (*s.begin())[0];
//         int v = (*s.begin())[1];
//         int u = (*s.begin())[2];
//         s.erase(s.begin());
//         if (vis[v] == 1)
//             continue;
//         if (u != -1)
//         {
//             if (u == 0)
//             {
//                 ps_built.push_back(v);
//             }
//             else if (v == 0)
//             {
//                 ps_built.push_back(u);
//             }
//             else
//             {
//                 cities_conn.push_back({u, v});
//             }
//         }
//         vis[v] = 1;
//         cost += w;
//         for (auto &x : adj[v])
//         {
//             s.insert({x.first, x.second, v});
//         }
//     }
//     cout << cost << endl;
//     cout << ps_built.size() << endl;
//     for (int i = 0; i < ps_built.size(); ++i)
//         cout << ps_built[i] << ' ';
//     cout << endl;
//     cout << cities_conn.size() << endl;
//     for (auto c : cities_conn)
//         cout << c.first << ' ' << c.second << endl;
//     return 0;
// }