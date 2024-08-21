#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(void){
    int t; cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        for(int i=0; i<5; i++){
            if(a<b && a<c) a++;
            else if(b<a && b<c) b++;
            else if(c<a && c<b) c++;
            else if(a==b && b==c) a++;
            else if(a==b && a<c) a++;
            else if(a==c && a<b) a++;
            else if(b==c && b<a) b++;
        }
        // cout<<a<<" "<<b<<" "<<c<<'\n';
        cout<<(a*b*c)<<'\n';
    }
    return 0;
}