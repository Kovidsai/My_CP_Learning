#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, k; cin>>n>>k;
  vector<int> h(n);
  for(auto &x:h) cin>>x;
  vector<int> dp(n, INT_MAX);
  dp[0] = 0;
  dp[1] = abs(h[0]-h[1]);
  for(int i=2; i<n; i++)
  {
    for(int j=max(0, i-k); j<i; j++)
    {
      dp[i] = min(dp[i], dp[j]+abs(h[i]-h[j]));
    }
  }
  cout<<dp[n-1];
  return 0;
}