#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(void){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int> a(k);
        for(auto &x: a) cin>>x;
        int mx_ind=0;
        for(int i=0; i<k; i++){
            if(a[mx_ind]<a[i]){
                mx_ind = i;
            }
        }
        int ans = n-a[mx_ind];
        for(int i=0; i<k; i++){
            if(i==mx_ind) continue;
            ans += a[i]-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}