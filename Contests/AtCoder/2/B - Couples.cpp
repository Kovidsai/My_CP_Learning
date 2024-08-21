#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int m = 2*n;
    vector<int> v(m);
    for(auto &x:v) cin>>x;
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    int c=0;
    for(int i=1; i<m-1; i++)
    {
        if(v[i-1]==v[i+1]) 
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}