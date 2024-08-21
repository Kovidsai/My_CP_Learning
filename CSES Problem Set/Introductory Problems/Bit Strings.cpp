#include<bits/stdc++.h>
using namespace std;
#define int long long 
int mod = 1000000000+7;
signed main(void){
    int n; cin>>n;
    int ans =2, cr=2;
    for(int i=2; i<=n; i++){
        ans = 2*cr %mod;
        cr = ans;
    }
    cout<<ans%mod;
    return 0;
}