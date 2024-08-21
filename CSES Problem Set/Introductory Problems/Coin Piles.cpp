#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b<a) swap(a, b);
        if(b>(2*a)){
            cout<<"NO"<<"\n";
            continue;
        }
        if((a%3==0 && b%3==0) || (a%3==1 && b%3==2) || (a%3==2 && b%3==1)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}