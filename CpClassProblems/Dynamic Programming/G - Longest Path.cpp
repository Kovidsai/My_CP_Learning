#include<bits/stdc++.h>
using namespace std;
int main(){

    //I am back :)

    int n, m; cin>>n>>m;
    vector<int> indeg(n);
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        u--; v--;
        indeg[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dp(n);
    vector<pair<int, int>> topo;
    queue<pair<int, int>> q;
    for(int i=0; i<n; i++){
        if(indeg[i]==0){
            q.push({i,-1});
            dp[i]=0;
        }
    }
    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();
        topo.push_back(v);
        for(auto &x:adj[v.first]){
            indeg[x]--;
            if(indeg[x]==0){
                q.push({x,v.first});
            }
        }
    }
    for(int i=0; i<n; i++){
        if(topo[i].second == -1) dp[topo[i].first] = 0;
        else dp[topo[i].first] = dp[topo[i].second]+1;
    }

    cout<<*max_element(dp.begin(), dp.end());
    return 0;
}