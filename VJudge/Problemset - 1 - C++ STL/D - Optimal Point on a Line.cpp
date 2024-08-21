#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> s(n);
    for(auto &x:s) cin>>x;
    sort(s.begin(), s.end());
    if(n%2==0)
    {
        cout<<s[(n-1)/2];
    }
    else
    {
        cout<<s[(n)/2];
    }
    return 0;
}