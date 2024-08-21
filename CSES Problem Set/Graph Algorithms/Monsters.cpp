#include<bits/stdc++.h>
using namespace std;
int main()
{
    // input
    int n, m;
    vector<string> v(n);
    for(auto &x:v) cin>>x;

    //checking for monsters and starting points
    vector<pair<int, int>> monsters;
    pair<int, int> mypos;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='M') monsters.push_back({i, j});
            if(v[i][j]=='A') monsters.push_back({i, j});
        }
    }
    
    return 0;
}
