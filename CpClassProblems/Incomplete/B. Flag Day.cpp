#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(auto &x:v[i]) 
        {
            cin>>x; 
            x--; 
        }
    }
    return 0;
}