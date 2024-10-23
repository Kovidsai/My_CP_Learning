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
    vector<int> arr(n);
    int flg=1;
    for(auto &x: arr) {
        cin>>x;
        if(x!=0) flg =0;
    }
    if(flg){ 
        cout<<0<<'\n';
        return;
    }
    int k =0;
    if(n%2==0){
        for(auto &x: arr) k^=x;
        if(k==0) {
            cout<<1<<'\n';
            cout<<1<<" "<<n<<'\n';
        }
        else{
            cout<<2<<'\n';
            cout<<1<<" "<<n<<'\n';
            cout<<1<<" "<<n<<'\n';
        }
    }
    else{
        // k = arr[n-1];
        for(auto &x: arr) k^=x;
        if(k==0) {
            cout<<1<<'\n';
            cout<<1<<" "<<n<<'\n';
        }
        else{
            cout<<4<<'\n';
            cout<<1<<" "<<(n-1)<<'\n';
            cout<<1<<" "<<(n-1)<<'\n';
            cout<<(n-1)<<" "<<n<<'\n';
            cout<<1<<" "<<n<<'\n';
        }
    }
}
signed main() {
    bolt;
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
        // freopen("input.txt", "w", stdin);
        // freopen("output.txt", "w", stdout);
    #endif
    tc solve();
    return 0;
}