#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n; cin>>n; 
    int k, kmm=0;
    for(int i=0; i<n-1; i++) { cin>>k; kmm+=k;}
    int smm = ((n+1)*(n))/2;
    cout<<smm-kmm;
    return 0;
}