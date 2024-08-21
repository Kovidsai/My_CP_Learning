#include<bits/stdc++.h>
using namespace std;

int dfs(int col, int par, int ver, vector<vector<int>> adj){
    int ans;
    if(adj[ver].size()==1){

    }
    
    for(auto &c: adj[ver]){
        int cnt=0;
        if(c!=par){
            cnt = dfs(col^1, par, ver, adj);
        }
    }
}

int main(){
    int n; cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = dfs(0, 0, 1, adj) + dfs(1, 0, 1, adj);
    cout<<ans;
    return 0;
}











/*
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N=1e5+10;
int dp[2][N];

int dfs(int ver,int par,int col,vector<vector<int>> &adj){
    if(dp[col][ver]!=-1){
        return dp[col][ver];
    }
    ll ans=1;
    for(auto &child:adj[ver]){
        if(child!=par){
            int cnt=dfs(child,ver,col^1,adj);
            if(col==0){
                cnt+=dfs(child,ver,0,adj);
                cnt%=1000000007;
            }
            ans*=cnt;
            ans%=1000000007;
        }
    }
    return dp[col][ver]=ans;
}

int main(){
    IOS
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=dfs(1,0,0,adj)+dfs(1,0,1,adj);
    ans%=1000000007;
    cout<<ans;
    return 0;
}
*/