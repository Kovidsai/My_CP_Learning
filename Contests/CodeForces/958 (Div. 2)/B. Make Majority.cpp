#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(void){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        if(n==1 && s[0]=='1'){
            cout<<"Yes"<<'\n';
            continue;
        }
        int ones=0, zeros=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                ones++;
            }
            if(s[i]=='0'){
                i++;
                // cout<<i;
                while(s[i]=='0'){
                    i++;
                }
                if(i<n) ones++;
                zeros++;
            }
        }
        // cout<<ones;
        if(zeros>=ones) cout<<"No"<<"\n";
        else cout<<"Yes"<<'\n';

    }
    return 0;
}