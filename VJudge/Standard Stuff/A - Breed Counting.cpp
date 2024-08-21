#include<bits/stdc++.h>
using namespace std;
int main()
{
    //input
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);
    int n,q; 
    cin>>n>>q;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    for(int i=0; i<n; i++)
    {
        v[i]-=1;
    }
    // cout<<v[3];
    //calculating Prefix Sums
    vector<vector<int>> ans(n+1,vector<int>(3));
    for(int i=0; i<n; i++)
    {
        ans[i+1][0] = ans[i][0];
        ans[i+1][1] = ans[i][1];
        ans[i+1][2] = ans[i][2];
        ans[i+1][v[i]]++;
    }
    int i, j;
    while(q--)
    {
        cin>>i>>j;
        cout<<ans[j][0]-ans[i-1][0]<<" "
            <<ans[j][1]-ans[i-1][1]<<" "
            <<ans[j][2]-ans[i-1][2]<<"\n";
    }
    return 0;
}