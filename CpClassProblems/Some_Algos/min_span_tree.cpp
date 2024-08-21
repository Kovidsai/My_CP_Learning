#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n, m; cin>>n>>m;
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0; i<m; i++){
        int u, v, c; cin>>u>>v>>c;
        adj[u].push_back({c, v});
        adj[v].push_back({c, u});
    } 
    vector<int> vis(n+1);
    set<pair<int, int>> st;
    st.insert({0, 1});
    int wt=0;
    while(st.size()>0){
        int w = (*st.begin()).first;
        int v = (*st.begin()).second;
        st.erase(st.begin());
        if(vis[v]==1) continue;
        vis[v]=1;
        wt += w;
        for(auto &it : adj[v]){
            st.insert(it);
        }
    }
    cout<<wt;
    return 0;
}