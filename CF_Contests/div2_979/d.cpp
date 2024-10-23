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
    vector<int> queries(q);
    for(auto &x: arr) cin>>x;
    string t; cin>>t;
    for(auto &x: queries) cin>>x;
    vector<int> isper(n); // gives 1  if arr is permutation till i
    int mx = arr[0];
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        if(mx==(i+1)) isper[i]=1;
    }
    set<int> lrs;
    for(int i=0; i<n-1; i++){
        if(t[i]=='L' && t[i+1]=='R'){
            if(isper[i]==0) lrs.insert(i);
        }
    }
    for(int i=0; i<q; i++){
        int ind = queries[i]-1;
        if(t[ind]=='L'){
            
            if(lrs.find(ind)!=lrs.end()) lrs.erase(ind);
            if(ind>0 && t[ind-1]=='L'){
                if(isper[ind-1]==0) lrs.insert(ind-1);
            }
            t[ind] = 'R';
        }
        else{
            if(ind>0 && lrs.find(ind-1)!=lrs.end()) lrs.erase(ind-1);
            if(ind<(n-1) && t[ind+1]=='R'){
                if(isper[ind]==0) lrs.insert(ind);
            }
            t[ind] = 'L';
        }
        if(lrs.empty()){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
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