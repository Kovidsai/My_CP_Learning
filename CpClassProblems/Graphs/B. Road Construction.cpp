#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; 
    cin>>n>>m;
    vector<int> deg(n, 1);
    for(int i=0; i<m; i++){
        int u, v; cin>>u>>v;
        u--; v--;
        deg[u]--; deg[v]--;
    }
    int main_node;
    for(int i=0; i<n; i++){
        if(deg[i]==1){
            main_node = i;
            break;
        } 
    }
    cout<<n-1<<'\n';
    for(int i=0; i<n; i++){
        if(main_node==i) continue;
        cout<<main_node+1<<" "<<i+1<<'\n';
    }
    return 0;
}