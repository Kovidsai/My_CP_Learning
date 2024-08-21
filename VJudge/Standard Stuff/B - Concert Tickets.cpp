#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int> t;
    vector<int> c(m);
    int j;
    for(int i=0; i<n; i++){
        cin>>j;
        t.insert(j); 
    }
    for(auto &x:c) cin>>x;
    for(int i=0; i<m; i++)
    {
        auto it = t.upper_bound(c[i]);
        if(t.empty() || it == t.begin())
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<*prev(it)<<'\n';
            t.erase(prev(it));
        }
    }
    return 0;
}