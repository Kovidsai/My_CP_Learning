#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(void){
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        string s; cin>>s;
        s = "L"+s;
        int i=0;
        for(int j=i; j<=i+m; j++){
            if(s[j]=='L'){
                i =j;
            }
            // cout<<i<<" ";
        }
        i += m;
        int test = 1;
        while(i<n+1){
            if(s[i]=='L'){
                // i = jump(i);
                break;
            }
            else if(s[i]=='W') { k--;}
            else if(s[i]=='C') { test=0; break; }
            else if(k<0) {test=0; break;}
            i++;
        }
        if(test) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
    return 0;
}