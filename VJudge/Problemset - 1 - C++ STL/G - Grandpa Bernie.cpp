#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string, vector<int>> mp;
    string s;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>s>>x;
        (mp[s]).push_back(x);
    }
    for(auto &f:mp)
    {
        sort(f.second.begin(), f.second.end());
    }

    int q;
    cin>>q;
    string str;
    int yr;
    
    for(int i=0; i<q; i++)
    {
        cin>>str>>yr;
        if(mp.find(str)==mp.end() || mp[str].size()<yr) cout<<-1<<'\n';
        else cout<<(mp[str])[yr-1]<<'\n';
    }
    return 0;
}

