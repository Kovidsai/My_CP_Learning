#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    map<string, int> mp;
    for(int i=0; i<q; i++)
    {
        int a;
        string name;
        int marks;
        cin>>a;
        if(a==1)
        {
            cin>>name>>marks;
            mp[name] += marks;
        }
        if(a==2)
        {
            cin>>name;
            mp[name] = 0;
        }
        if(a==3)
        {
            cin>>name;
            cout<<mp[name]<<'\n';
        }
    }
    return 0;
}