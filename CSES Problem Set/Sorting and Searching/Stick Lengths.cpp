#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    sort(v.begin(), v.end());
    long long op=0, med=v[n/2];
    for(int i=0; i<n; i++)
    {
        if(v[i]<med) op += med-v[i];
        else op += v[i]-med;
    }
    cout<<op;
    return 0;
}