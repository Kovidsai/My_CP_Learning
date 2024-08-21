#include<bits/stdc++.h>
using namespace std;
#define int long long 

vector<string> gray(int n){
    vector<string> res;
    if(n==1){
        res.push_back("0");
        res.push_back("1");
        return res;
    }
    vector<string> pres = gray(n-1);
    for(int i=0; i<pres.size(); i++){
        res.push_back("0"+pres[i]);
    }
    for(int i=pres.size()-1; i>=0; i--){
        res.push_back("1"+pres[i]);
    }
    return res;
}


signed main(void){
    int n; cin>>n;
    vector<string> ans = gray(n);
    for(auto &x: ans) cout<<x<<'\n';
    return 0;
}