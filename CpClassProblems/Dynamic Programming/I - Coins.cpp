#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<long double> p(n);
    for(int i=0; i<n; i++) cin>>p[i];
    vector<vector<long double>> dp(n+1, vector<long double>(n+1, 0));

    dp[1][0] = 1.0-p[0];
    dp[1][1] = p[0];
    for(int i=2; i<=n; i++)
    {
        dp[i][0] = (dp[i-1][0])*(1-p[i-1]);
    }

    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dp[i][j] = ((dp[i-1][j-1])*p[i-1]) + (dp[i-1][j]*(1-p[i-1])) ;
        }
    } 
    int f = n/2 +1;
    long double ans=0;
    for(int i=f; i<=n; i++)
    {
        ans = ans+ dp[n][i];
    }
    cout<<setprecision(10)<<ans;
    return 0;
}