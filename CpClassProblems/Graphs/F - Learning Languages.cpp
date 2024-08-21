#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<int> &vis){
    if(vis[v]==1) return;
    vis[v]=1;
    for(int i=0; i<adj[v].size(); i++){
        dfs(adj[v][i], adj, vis);
    }
}

int main(){
    int n, m; cin>>n>>m;
    int chk=0;
    vector<vector<int>> emp(n, vector<int>(m));
    for(int i=0; i<n; i++){
        int s; cin>>s;
        for(int j=0; j<s; j++){
            chk=1;
            int l; cin>>l; l--;
            emp[i][l] = true;
        }
    }
    if(chk==0){
        cout<<n;
        return 0;
    }
    vector<vector<int>> adj(n);
    for(int i=0; i<n-1; i++){
        for(int k=i+1; k<n; k++){
            for(int j=0; j<m; j++){
                if(emp[i][j] && emp[k][j]){
                    adj[i].push_back(k);
                    adj[k].push_back(i);
                    break;
                }
            }
        }
    }
    vector<int> vis(n);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(vis[i]==0){
            dfs(i, adj, vis);
            cnt++;
        }
    }
    cout<<cnt-1;
    return 0;
}