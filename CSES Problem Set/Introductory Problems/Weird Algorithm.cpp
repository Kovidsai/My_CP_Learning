#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(void){
    int n; cin>>n;
    vector<int> ans;
    // ans.push_back(n);
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0) {
            n = n/2;
        }
        else {
            n = n*3 +1;
        }
        // ans.push_back(n);
        cout<<n<<" ";
    }
    // for(auto &x:ans) 
    // cout<<n;
    return 0;
}