#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int k=0; k<n; k++) cin>>a[k];
    for(int k=0; k<m; k++) cin>>b[k];
    sort(a, a+n);
    sort(b, b+m);
    long long c=0;
    int i=0, j=0;
    while(i<n && j<m)
    {
        if(a[i]>=b[j])
        {
            c += a[i];
            i++;
            j++;
        }
        else i++;
    }
    if(j==m) cout<<c;
    else cout<<-1;
    return 0;
}