#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n = s.size();
    vector<vector<int>> adj(n);
    vector<vector<int>> adj2(10);
    for(int i=0; i<n; i++){
        adj2[s[i]-'0'].push_back(i);
    }
    adj[0].push_back(1);
    for(auto &x: adj2[s[0]-'0']){
        if((0!=x) && (x!=1)) adj[0].push_back(x);
    }
    adj[n-1].push_back(n-2);
    for(auto &x: adj2[s[n-1]-'0']){
        if(((n-1)!=x) && (x!=(n-2))) adj[n-1].push_back(x);
    }
    for(int i=1; i<n-1; i++){
        adj[i].push_back(i-1);
        adj[i].push_back(i+1);
        for(auto &x: adj2[s[i]-'0']){
            if((i!=x) && (x!=i-1) && (x!=i+1)) adj[i].push_back(x);
        }
    }

    // for(int i=0; i<n; i++){
    //     cout<<i<<"--";
    //     for(auto &x: adj[i]) cout<<x<<" ";
    //     cout<<"\n";
    // }
    vector<int> vis(n), lev(n);
    queue<int> q;
    q.push(0);
    vis[0] =1;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto &x: adj[v]){
            if(vis[x]==0){
                q.push(x);
                vis[x] = 1;
                lev[x] = lev[v]+1;
            }
        }
    }
    cout<<lev[n-1];
    return 0;
}