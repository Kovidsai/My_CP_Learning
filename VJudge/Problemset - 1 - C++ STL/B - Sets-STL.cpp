#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    set<int> s;
    for(int i=0; i<q; i++)
    {
        int x, y;
        cin>>x>>y;
        if(x==1)
        {
            s.insert(y);
        }
        else if(x==2)
        {
            auto it = s.find(y);
            if(it!=s.end())
            {
                s.erase(y);
            }
        }
        else if(x==3)
        {
            auto it = s.find(y);
            if(it!=s.end())
            {
                cout<<"Yes"<<"\n";
            }
            else
            {
                cout<<"No"<<"\n";
            }
        }
    }
    return 0;
}