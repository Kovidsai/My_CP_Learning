#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i=0; i<n; i++) for(auto &x: arr[i]) cin>>x;
        vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(m));
        if((n+m-1)%2!=0) {
            cout<<"NO"<<"\n";
            continue;
        }
        if(arr[0][0]==1){
            dp[0][0].first +=1;
        }
        else{
             dp[0][0].second +=1;
        }
        for(int i=1; i<n; i++){
            dp[i][0].first = dp[i-1][0].first;
            dp[i][0].second = dp[i-1][0].second;
            if(arr[i][0]==1){
                dp[i][0].first += 1;
            }
            else{
                dp[i][0].second += 1;
            }
        }
        for(int i=1; i<m; i++){
            dp[0][i].first = dp[0][i-1].first;
            dp[0][i].second = dp[0][i-1].second;
            if(arr[0][i]==1){
                dp[0][i].first += 1;
            }
            else{
                dp[0][i].second += 1;
            }
        }

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                dp[i][j].first = max(dp[i][j-1].first, dp[i-1][j].first);
                dp[i][j].second = max(dp[i][j-1].second, dp[i-1][j].second);
                if(arr[i][j]==1){
                    dp[i][j].first++;
                }
                else{
                    dp[i][j].second++;
                }
            }
        }
        int pp = (n+m-1)/2;
        // cout<<(dp[n-1][m-1].first==pp)<<"\n";
        // cout<<(dp[n-1][m-1].second==pp)<<"\n";
        if(dp[n-1][m-1].first>=pp && dp[n-1][m-1].second>=pp){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}