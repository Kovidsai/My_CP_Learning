#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> a;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.insert(x);
    }
    if(a.size()>1)
    {
        cout<<*(++a.begin());
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}