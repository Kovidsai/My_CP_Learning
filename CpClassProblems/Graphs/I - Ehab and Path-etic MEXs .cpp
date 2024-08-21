#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int u, v, l;
};
int main(){
    int n; 
    // vector<vector<int>> adj(n);
    cin>>n;
    vector<Edge> edges(n-1);
    vector<int> deg(n+1);
    for(auto &x:edges) {
        cin>>x.u>>x.v;
        x.l=0;
        deg[x.u]++;
        deg[x.v]++;
    }
    int chk=0, node;
    for(int i=1; i<=n; i++){
        if(deg[i]>2){
            chk =1;
            node=i;
            break;
        }
    }
    // int run = n-1;
    int k=2, p=3;
    if(chk==1){
        for(auto &x:edges){
            if((x.u==node || x.v==node) && k>=0){
                x.l = k;
                k--;
            }
            else{
                x.l = p;
                p++;
            }
        }
        for(auto &x: edges){
            cout<<x.l<<'\n';
            }
    }
    else{
        for(int i=0; i<n-1; i++){
            cout<<i<<'\n';
        }
    }
    
    
    return 0;
}

// for(int i=0; i<n-1; i++){
    //     int u, v; cin>>u>>v;
    //     u--; v--;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }
    // int chk=0;
    // for(int i=0; i<n; i++){
    //     if(adj[i].size()==3){
    //         chk =1;
    //         break;
    //     }
    // }
    // if(chk==0){

    // }