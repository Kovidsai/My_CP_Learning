#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    const int sz = 10001;
    vector<int> ans(sz);
    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 6;
    ans[3] = 28;
    ans[4] = 96;
    ans[5] = 252;
    // int nm2 = 8; //cnst 4*2  corners
    // int nm3 = 24; //cnst 8*3 next to corners
    // int cnm4 = 16; //cnst 4*4 diag adj to corners 
    int pntot1 = 24; 
    int dnm4 = 4; // +4
    int nm6 = 4; //+4
    int nm8 = 1; // ^2
    int k = 2;
    for(int i=6; i<sz; i++){
        int temp = i*i;
        int tot = (temp*(temp-1))/2;
        dnm4 +=4;
        nm6 +=4; 
        nm8 = (k*k)*8;
        int pntot2 = ((dnm4*4)+(nm6*6)+nm8)/2;
        tot = tot-pntot1-pntot2;
        ans[i]=tot;
        k++;
    }

    int n; cin>>n;
    for(int i=1; i<=n; i++) cout<<ans[i]<<'\n';
    return 0;
}