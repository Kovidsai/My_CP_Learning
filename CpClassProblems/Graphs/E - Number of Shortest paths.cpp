#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> dist(n+1, -1), cnt(n+1);
    queue<int> q;
    q.push(1);
    cnt[1]=1;
    dist[1]=0;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto &x: adj[v]){
            if(dist[x]!=-1){
                dist[x] = dist[v]+1;
                cnt[x] = cnt[v];
                q.push(x);
            }
            else if(dist[x]==dist[v]+1){
                cnt[x] += cnt[v];
            }
        }
    }

    cout<<cnt[n];
    return 0;
}