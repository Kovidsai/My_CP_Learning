#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin>>i;
    set<int> s;
    int x;
    for(int j=0; j<i; j++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()<=1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<*(++s.begin());
    }
}