#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(void){
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    int moves=0;
    for(int i=1; i<n; i++){
        if(v[i-1]>v[i]) {
            moves += v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    cout<<moves;
    return 0;
}