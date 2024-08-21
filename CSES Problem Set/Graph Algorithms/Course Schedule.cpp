#include<bits/stdc++.h>
using namespace std;



int main(){

    int n, m;
    cin>>n>>m;
   
    vector<int> indeg(n);
    vector<vector<int>> adj(n);

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b; a--; b--;
        indeg[b]++;
        adj[a].push_back(b);
    }
    
    vector<int> topo;
    queue<int> q;
    // int i=0;

    for(int i=0; i<n; i++){
        if(indeg[i]==0){
            q.push(i);
            // topo.push_back(i);
        }
    }
    while(!q.empty()){
        int v = q.front(); q.pop();
        topo.push_back(v);
        for(auto &x: adj[v]){
            indeg[x]--;
            if(indeg[x]==0){
                q.push(x);
            }
        }
    }

    if(topo.size()!=n) {
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    for(auto &x:topo){
        cout<<x+1<<" ";
    }
    

    return 0;
}