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
    int n; cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for(auto &x: arr1) cin>>x;
    for(auto &x: arr2) cin>>x;
    vector<int> mx_freqs1(n+n+1);
    vector<int> mx_freqs2(n+n+1);
    int frq, cur;
    for(int i=0; i<n; ){
        frq=1;
        cur=arr1[i];
        i++;
        while(i<n && arr1[i]==cur){
            frq++;
            i++;
        }
        mx_freqs1[cur] = max(mx_freqs1[cur], frq);
    }

    for(int i=0; i<n; ){
        frq=1;
        cur=arr2[i];
        i++;
        while(i<n && arr2[i]==cur){
            frq++;
            i++;
        }
        mx_freqs2[cur] = max(mx_freqs2[cur], frq);
    }
    for(int i=0; i<mx_freqs1.size(); i++){
        mx_freqs1[i] += mx_freqs2[i];
    }


    cout<<(*max_element(mx_freqs1.begin(), mx_freqs1.end()))<<'\n';
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