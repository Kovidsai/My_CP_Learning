#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t; cin>>t;
    while(t--){
        int y, x; cin>>y>>x;
        if(y>x){
            if(y%2==0){
                cout<<((y*y)-x+1)<<'\n';
            }
            else{
                cout<<(((y-1)*(y-1))+x)<<'\n';
            }
        }
        if(x>y){
            if(x%2!=0){
                cout<<((x*x)-y+1)<<'\n';
            }
            else{
                cout<<(((x-1)*(x-1))+y)<<'\n';
            }
        }
        if(x==y){
            int ans = (x*x)+((y-1)*(y-1))+1;
            cout<<ans/2<<'\n';
        }
    }
    return 0;
}