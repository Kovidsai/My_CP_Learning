// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin>>n>>k;
//     vector<int> cat(n);
//     vector<vector<int>> adj(n);
//     for(auto &x:cat) cin>>x;
//     for(int i=0; i<n-1; i++){
//         int u, v;
//         cin>>u>>v;
//         u--; v--;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> vis(n);
//     int ans=0;
//     function<void(int, int)> dfs = [&](int v, int cc){
//         if(vis[v]==1) return;
//         if(cc>k) return;
//         vis[v] = 1;
//         if(adj[v].size()==1 && v!=0) ans++;
//         for(auto &x: adj[v]){
//             int tcc = cc;
//             if(cat[x]==1) tcc +=1;
//             else tcc=0;
//             dfs(x, tcc);
//         }
//     };

//     dfs(0, cat[0]);
//     cout<<ans;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> cat(n);
    vector<vector<int>> adj(n);
    for (auto &x : cat)
        cin >> x;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n);
    int ans = 0;
    function<void(int, int)> dfs = [&](int v, int cc)
    {
        if (vis[v] == 1)
            return;
        if (cc > k)
            return;
        vis[v] = 1;
        if (adj[v].size() == 1 && v != 0)
            ans++;
        for (auto &x : adj[v])
        {
            int tcc = cc;
            if (cat[x] == 1)
                tcc += 1;
            else
                tcc = 0;
            dfs(x, tcc);
        }
    };

    dfs(0, cat[0]);
    cout << ans;

    return 0;
}