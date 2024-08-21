#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> child(n);
    for(auto &x:child) cin>>x;
    vector<vector<int>> dp(n, vector<int>(k)), pref(n, vector<int>(k));
    for(int i=0; i<n; i++) dp[i][0] = 1;
    dp[0][k] = 1;
    pref[0][0]=1;
    for(int i=1; i<k; i++) pref[0][i] = pref[0][i-1] + dp[0][i];

    for(int i=1; i<n; i++){
        for(int j=0; j<k; j++){
            dp[i][j] = pref[k-1]
        }
    }
    return 0;
}