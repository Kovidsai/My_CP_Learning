#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<vector<int>> t(n, vector<int>(3));
    for(int i=0; i<n; i++) for(auto &x: t[i]) cin>>x;
    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0]=t[0][0];
    dp[0][1]=t[0][1];
    dp[0][2]=t[0][2];
    for(int i=1; i<n; i++)
    {
        dp[i][0] = max(dp[i-1][1]+t[i][0], dp[i-1][2]+t[i][0]);
        dp[i][1] = max(dp[i-1][0]+t[i][1], dp[i-1][2]+t[i][1]);
        dp[i][2] = max(dp[i-1][0]+t[i][2], dp[i-1][1]+t[i][2]);
    }
    int ans = INT_MIN;
    for(int i=0; i<3; i++) ans = max(ans, dp[n-1][i]);
    cout<<ans;
    return 0; 
}