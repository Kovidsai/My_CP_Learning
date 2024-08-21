#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        vector<int> perm;
        for(int i=n; i>m; i--){
            perm.push_back(i); 
        }
        for(int i=1; i<=m; i++){
            perm.push_back(i);
        }
        for(auto &x: perm) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
}