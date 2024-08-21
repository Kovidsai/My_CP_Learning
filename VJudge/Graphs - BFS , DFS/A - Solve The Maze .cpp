#include<bits/stdc++.h>
using namespace std;
#define int long long 

int h[4] = {1, 0, -1, 0};
int vt[4] = {0, 1, 0, -1};
bool valid(int x, int y, int n, int m){
    return (x>=0 && y>=0 && x<n && y<m);
}

signed main(void){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<vector<char>> v(n, vector<char>(m));
        for(int i=0; i<n; i++){
            for(auto &x: v[i]) cin>>x;
        }
        int out=0;
        vector<pair<int, int>> gi;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]=='B'){
                    int x=i, y=j;
                    for(int k=0; k<4; k++){
                       x = i+ h[k];
                       y = j+ vt[k];
                       if(valid(x, y, n, m)){
                            if(v[x][y]=='#' || v[x][y]=='B'){
                                continue;
                            }
                            if(v[x][y]=='G'){
                                cout<<"No"<<'\n';
                                out = 1;
                                break;
                                // return 0;
                            }
                            if(v[x][y]=='.') v[x][y]='#';
                       }
                    }
                }
                if(v[i][j]=='G'){
                    gi.push_back({i, j});
                }

                if(out) break;
            }
            if(out) break;
        }
        if(out) continue;
        
        if(gi.size()==0){
            cout<<"Yes"<<'\n';
            continue;
        }
        if(v[n-1][m-1]=='#'){
            cout<<"No"<<'\n';
            continue;
        }
        
        int pass=1;
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m));
        q.push({n-1, m-1});
        vis[n-1][m-1]=1;
        while(!q.empty()){
            int u1 = q.front().first, u2 = q.front().second;
            q.pop();
            int x, y;
            for(int k=0; k<4; k++){
                x = u1+h[k];
                y = u2+vt[k];
                if(valid(x, y, n, m) && vis[x][y]==0){
                    if(v[x][y]=='G' || v[x][y]=='.'){
                        vis[x][y] = 1;
                        q.push({x, y});
                    }
                }
            }
        }
    
        for(int i=0; i<gi.size(); i++){
            if(vis[gi[i].first][gi[i].second]==0){
                pass =0;
                break;
            }
        }
        if(pass) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}