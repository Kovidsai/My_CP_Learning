// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, k; cin>>n>>k;
//     vector<pair<int, int>> w(n+1);
//     w[0].first=0; 
//     w[0].second=0;
//     for(auto &x:w) cin>>x.first>>x.second;
//     vector<vector<int>> dp(n, vector<int>(k));

//     for(int i=1; i<n; i++)
//     {
//         for(int j= w[1].first; j<=k; j++)
//         {
//             // if(j-1>=w[i].first)
//             // {
//             //     dp[i][j] = w[i].second;
//             // }
//             dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             if(j==w[i].first)
//                 dp[i][j] = max(dp[i-1][j], dp[i-1][j]+w[i].second);
//         }
        
//     }
//     int ans = INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//         ans = max(ans, dp[i][k-1]);
//     }
//     cout<<ans;
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// typedef vector<vi> vii;

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair
// #define loop(n) for(int i=0; i<n; i++)
// #define rep(i, a, n) for(int i=a; i<n; i++)
// #define file_read freopen("input.txt", "r", stdin); \
// 				  freopen("output.txt", "w", stdout);
// #define tc int t; cin>>t; while(t--)
// #define endl "\n"
// #define usainbolt cin.tie(0) -> sync_with_stdio(0)


// #define int ll

// signed main(void){
// 	usainbolt;
// 	//file_read

// 	int n, w;
// 	cin>>n>>w;
// 	int val[n], weights[n];
// 	for(int i=0; i<n; i++){
// 		cin>>weights[i]>>val[i];
// 	}
// 	int dp[n][w+1];
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<w+1; j++){
// 			dp[i][j] = 0;
// 		}
// 	}
// 	dp[0][weights[0]] = val[0];
// 	for(int i=1; i<n; i++){
// 		for(int j=0; j<w+1; j++){
// 			int a = dp[i-1][j];
// 			int b = 0; 
// 			if(j+weights[i]<=w){
// 				b = max({a, dp[i][j+weights[i]-1], dp[i-1][j]+val[i]});
// 				dp[i][j+weights[i]] = b;
// 			}
// 			dp[i][j] = max(dp[i][j], dp[i-1][j]);
// 		}
// 	}

// 	cout<<dp[n-1][w]<<endl;


	
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, w; cin>>n>>w;
    vector<long long> weights(n);
    vector<long long> values(n);
    for(long long i=0; i<n; i++)
    {
        cin>>weights[i]>>values[i];
    }

    vector<vector<long long>> dp(n+1, vector<long long>(w+1));

    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=w; j++)
        {
            if(j>=weights[i-1])
                dp[i][j] = dp[i-1][j-weights[i-1]] + values[i-1];
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
        }
    }
    cout<<dp[n][w];

    return 0;
}