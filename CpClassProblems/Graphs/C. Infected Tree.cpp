#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t; cin>>t;
    // while(t--){
        int n; cin>>n;
        vector<vector<int>> adj(n+1);
        for(int i=0; i<n-1; i++){
            int u, v; cin>>u>>v;
            // u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>> dp(n);

    // }
    return 0;
}