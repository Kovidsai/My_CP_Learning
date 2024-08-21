#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Input
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v; 
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    vector<int> color(n, -1);
    int chk = 1;

    // Modified DFS 
    function<void(int)> dfs = [&](int v){
        for(auto &x:adj[v]){
            if(color[x]==-1){
                color[x] = 1^color[v]; // xor of 1^0 = 1, 1^1 =0
                dfs(x);
            }
            else if(color[x]==color[v]) chk=0;
        }
        return;
    };

    for(int i=0; i<n; i++){
        if(color[i]==-1){
            color[i] = 0;
            dfs(i);
        }
    }

    if(chk==0){
        cout<<"IMPOSSIBLE\n";
    }
    else{
        for(auto &c:color){
            cout<<c+1<<" ";
        }
    }






// The below code doesn't work cause we may have disconnected components
// in the graph 




    // // Color the graph
    // vector<int> color(n, -1);
    // color[0] = 0;
    // vector<int> vis(n);
    // vis[0]=1;
    // queue<int> q;
    // q.push(0);
    // while(!q.empty())
    // {
    //     int v = q.front(); q.pop();
    //     for(auto &x:adj[v]){
    //         if(!vis[x]) {
    //             q.push(x);
    //             vis[x]=true;
    //         }
    //         if(color[v]==-1 && color[x]!=-1) {
    //              color[v] = 1^color[x];
    //         }
    //         if(color[v]!=-1 && color[x]==-1){
    //             color[x]= 1^color[v];
    //         }
    //         if(color[v]!=-1){
    //             if(color[v]==color[x]){
    //                 cout<<"IMPOSSIBLE\n";
    //                 return 0;
    //             }
    //         }
    //     }
    // }
    // for(auto &x:color) {
    //     if(x==-1) cout<<1<<" ";
    //     else cout<<x+1<<" ";
    // }
    return 0;
}