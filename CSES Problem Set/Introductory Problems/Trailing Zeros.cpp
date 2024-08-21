#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(void){
    int n; cin>>n;
    int ans=0;
    while(n){
        n = n/5;
        ans += n;
    }
    cout<<ans;
    return 0;
}