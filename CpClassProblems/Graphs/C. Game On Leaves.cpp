#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, x; cin>>n>>x;
        x--;
        vector<int> deg(n);
        for(int i=0; i<n-1; i++){
            int u, v; cin>>u>>v;
            u--; v--;
            deg[u]++;
            deg[v]++;
        }
        if(deg[x]<=1) cout<<"Ayush"<<"\n";
        else{
            if(n%2==0){
                cout<<"Ayush"<<'\n';
            }
            else{
                cout<<"Ashish"<<'\n';
            }
        } 
    }
    return 0;
}