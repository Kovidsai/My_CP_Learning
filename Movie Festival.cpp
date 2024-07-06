#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        vector<int> f(n);
        for(auto &x:v) cin>>x;
        for(auto &x:f) cin>>x;
        vector<int> d(n);
        d[0] = f[0]-v[0];
        for(int i=1; i<n; i++)
        {
            d[i] = f[i]-max(f[i-1], v[i]);
        }
        for(auto &x:d) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
}