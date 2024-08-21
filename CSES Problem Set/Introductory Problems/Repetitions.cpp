#include<bits/stdc++.h>
using namespace std;
signed main(){
    string s; cin>>s;
    int mx=1, curr=1;
    for(int i=1; i<s.length(); i++){
        if(s[i-1]==s[i]){
            curr +=1;
        }
        else curr=1;
        mx = max(mx, curr);
    }
    cout<<mx;
    return 0;
}