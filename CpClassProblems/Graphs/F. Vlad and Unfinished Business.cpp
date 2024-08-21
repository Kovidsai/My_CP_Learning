#include<iostream>
#include<vector>
using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<int> &vis, int y){
    if(v==y);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int vlad, nastya; 
        cin>>vlad>>nastya;
        vector<int> things(k);
        for(auto &x:things) cin>>x;
        vector<vector<int>> adj(n+1);
        for(int i=0; i<n-1; i++){
            int u,v; cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis();
    }
    return 0;
}