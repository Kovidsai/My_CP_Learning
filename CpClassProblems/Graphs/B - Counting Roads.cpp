#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<int> deg(n);
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        u--; v--;
        deg[u]++; deg[v]++;
    }
    for(auto &x:deg) cout<<x<<'\n';
    return 0; 
}