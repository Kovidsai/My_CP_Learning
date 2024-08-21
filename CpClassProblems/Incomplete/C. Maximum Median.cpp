#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>> n>>k;
    vector<int> s;
    for(auto &x:s) cin>>x;
    sort(s.begin(), s.end());
    int m = n/2;
    int med=m;
    while(k)
    {
        if(s[m]<s[m+1])
        {
            s[m] += 1;
        }
        else
        {
            s[m+1];
        }
    }
    return 0;
}