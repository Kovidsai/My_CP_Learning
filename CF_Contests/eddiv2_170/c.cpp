#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using lld = long double;
// #define int ll
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define tc int t; cin>>t; while(t--)
#define bolt cin.tie(0) -> sync_with_stdio(0)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve(){
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(auto &x: arr) cin>>x;
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> freqs;
    for(int i=0; i<n; ){
        int temp =1;
        int cur_ele=arr[i];
        i++;
        while(i<n && arr[i]==cur_ele){
            temp++;
            i++;
        }
        freqs.push_back({cur_ele, temp});
    }
    sort(freqs.begin(), freqs.end());
    vector<vector<int>> vryuse;
    int m = freqs.size();
    for(int i=0; i<m; ){
        vector<int> tvec;
        tvec.push_back(0);
        tvec.push_back(freqs[i].second);
        int ele = freqs[i].first;
        i++;
        while(i<m && ele==(freqs[i].first-1)){
            tvec.push_back(freqs[i].second);
            ele = freqs[i].first;
            i++;
        }
        vryuse.push_back(tvec);
    }
    // debug(vryuse);
    int dist = vryuse.size();
    int ans = 0;
    bool caled = 0;
    for(int i=0; i<dist; i++){
        int cur_mx= (vryuse[i].size()>=2)?vryuse[i][1]:0;
        for(int j=2; j<vryuse[i].size(); j++){
            vryuse[i][j] += vryuse[i][j-1];
            if(j>=k){
                caled=1;
                cur_mx = max(cur_mx, vryuse[i][j]-vryuse[i][j-k]);
            }
            else{
                cur_mx = max(cur_mx, vryuse[i][j]);
            }
        }
        // if(!caled){
        //     cur_mx = max(cur_mx, vryuse[i].back());
        // }
        ans = max(ans, cur_mx);
    }
    cout<<ans<<'\n';


    // int ans=0;
    // for(int i=freqs.size()-1; i>=0; i--){
    //     ans += freqs[i];
    //     k--;
    //     if(k==0) break;
    // }
    // cout<<ans<<'\n';
}
signed main() {
    bolt;
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif
    tc solve();
    return 0;
}