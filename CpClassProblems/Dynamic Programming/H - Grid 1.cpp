#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m; cin>>n>>m;
    long long mod = 1e9+7;
    vector<vector<char>> v(n, vector<char>(m));
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<m; j++)
        {
            cin>>v[i][j];
        }
    }
    vector<vector<long long>> dp(n, vector<long long>(m));
    long long k=0;
    while(k<n)
    {
        if(v[k][0]=='#') break;
        dp[k][0] = 1;
        k++;
    }
    long long l=0;
    while(l<m)
    {
        if(v[0][l]=='#') break;
        dp[0][l] = 1;
        l++;
    }

    for(long long i=1; i<n; i++)
    {
        for(long long j=1; j<m; j++)
        {
            if(v[i][j]!='#')
            {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
            }
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}