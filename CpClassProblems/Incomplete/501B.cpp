#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("breedflip.in","r",stdin);
    // freopen("breedflip.out","w",stdout);
    int n; 
    cin>>n;
    string s1, s2; 
    cin>>s1;
    cin>>s2;
    int i=0;
    int d=0;
    while(i<n)
    {
        if(s1[i]==s2[i]) i++;
        else
        {
            while(s1[i]!=s2[i] && i<n)
            {
                i++;
            }
            d++;
        }
    }
    cout<<d;
    return 0;
}