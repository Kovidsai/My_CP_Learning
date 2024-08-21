#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //input
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v) cin>>x;
    // Kadane's Algorithm
    ll mx = LLONG_MIN;
    ll summ=0;
    for(ll i=0; i<n;  i++)
    {
        summ += v[i];
        mx = max(mx, summ);
        if(summ<0)
        {
            summ = 0;
        }
        
    }
    cout<<mx;
    return 0;
}