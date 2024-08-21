#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, w;
    cin>>n>>w;
    vector<long long> weight(n);
    vector<long long> value(n);
    for(long long i=0; i<n; i++)
    {
        cin>>weight[i]>>value[i];
    }
    int mxv = 1e5 +10; 
    vector<vector<long long>> dp(n+1, vector<long long>(mxv+1, INT_MAX));
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<mxv; j++)
        {
            dp[i][j] = min(dp[i-1][j], dp[i][j]);
            
            if(j-value[i-1]>=0)
            {
                dp[i][j] = min(dp[i][j],  dp[i-1][j-value[i-1]]+weight[i-1]);
            }
        }
    }


    return 0;
}