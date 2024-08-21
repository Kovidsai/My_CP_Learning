#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector<string> v(n);
    for(auto &x:v) cin>>x;
    pair<int, int> st, en;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]=='A')
                st.first = i, st.second =j;
            if(v[i][j]=='B')
                en.first = i, en.second =j;
        }
    }
    queue<pair<int, int>> q;
    q.push(st);
    vector<pair<int, int>> path(n);
    vector<vector<int>> visited(n, vector<int>(m));  
    visited[st.first][st.second] = 1;
    while(!q.empty())
    {
        
    }

    
    return 0;
}