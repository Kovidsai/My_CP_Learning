#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string k;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='<')
        {
            k.push_back(s[i]);
        }
        if(s[i]=='<' && !k.empty())
        {
            k.pop_back();
        }
    }
    cout<<k;
    return 0;
}