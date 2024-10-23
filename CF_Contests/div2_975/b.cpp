#include<bits/stdc++.h>
using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// using lld = long double;
#define int long long
// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462
// #define set_bits __builtin_popcountll
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
#define tc int t; cin>>t; while(t--)
#define bolt cin.tie(0) -> sync_with_stdio(0)

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve(){
    int n, q; cin>>n>>q;
    vector<int> arr(n);
    // set()
    vector<int> queries(q);
    // set<int> s;
    for(auto &x: arr) {
        cin>>x;
        // s.insert(x);
    }
    for(auto &x: queries) cin>>x;
    vector<int> pref(n);
    pref[0] = n-1;
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1]+(n-i-1) - (i-1);
    }
    // for(auto &x: pref){
    //     cout<<x<<" ";
    // }
    unordered_map<int, int> mp;
    mp.insert({pref[0], arr[1]-arr[0]});
    for(int i=1; i<(n-1); i++){
        int num = arr[i+1]-arr[i]-1;
        if(mp.find(pref[i]-i)==mp.end()){
            mp.insert({pref[i]-i, num});
        }
        else{
            mp[pref[i]-i] += num;
        }
        if(mp.find(pref[i])==mp.end()){
            mp.insert({pref[i], 1});
        }
        else{
            mp[pref[i]] += 1;
        }
    }
    if(mp.find(pref[n-1])==mp.end()){
        mp.insert({pref[n-1], 1});
    }
    mp[pref[n-1]] += 1;

    for(auto x: queries){
        if(mp.find(x)==mp.end()){
            cout<<0<<" ";
        }
        else{
            cout<<mp[x]<<" ";
        }
    }
    cout<<'\n';

}
signed main() {
    bolt;
    // #ifndef ONLINE_JUDGE
    //     freopen("Error.txt", "w", stderr);
    // #endif
    tc solve();
    return 0;
}