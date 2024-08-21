#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(auto &x: a) cin>>x;
    vector<long long> p(n);
    p[0] = a[0];
    for(int i=1; i<n; i++)
    {
        p[i] = p[i-1]+a[i];
    }
    map<long long, long long> freq;
    freq[0]++;
    int c=0;
    for(int i=0; i<n; i++)
    {
        c += freq[p[i]-k];
        freq[p[i]]++;
    }
    cout<<c<<"\n";
    return 0;
}