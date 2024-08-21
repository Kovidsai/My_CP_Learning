#include<bits/stdc++.h>
using namespace std;

void func()
{
    long long n;
    cin>>n;
    vector<pair<long long, long long>> v(n);
    long long val;
    for(long long i=0; i<n; i++)
    {
        cin>>val;
        v[i] = {val, i+1};
    }
    sort(v.begin(), v.end());
    long long cnt=0;
    long long m, r;
    for(long long i=0; i<n; i++)
    {
        for(long long j=i+1; j<n; j++)
        {
            m = v[i].first * v[j].first;
            r = v[i].second + v[j].second;
            if(m==r) cnt++;
            if(m>=2*n) break;
        }
    }
    cout<<cnt<<"\n";
}

int main()
{
    long long q;
    cin>>q;
    while(q--) func();
    return 0;
}