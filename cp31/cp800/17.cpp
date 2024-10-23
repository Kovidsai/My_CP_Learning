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
    int n, k, x; cin>>n>>k>>x;
    // vector<int> arr(n);
    // for(auto &c: arr) cin>>c;
    if(k==1){
        cout<<"NO"<<'\n';
        return;
    }
    if(x!=1){
        cout<<"YES"<<'\n';
        cout<<n<<'\n';
        for(int i=0; i<n; i++) cout<<1<<" ";
        cout<<'\n';
    }
    else{
        if(n%2 && k<3){
            cout<<"NO"<<'\n';
        }
        else if(n%2){
            int m = 1;
            n-=3;
            m += (n/2);
            cout<<"YES"<<'\n';
            cout<<m<<'\n';
            for(int i=0; i<(m-1); i++){
                cout<<2<<" ";
            }
            cout<<3<<'\n';
        }
        else{
            int m = (n/2);
            cout<<"YES"<<'\n';
            cout<<m<<'\n';
            for(int i=0; i<m; i++){
                cout<<2<<" ";
            }
            cout<<'\n';
        }
    }
}
signed main() {
    bolt;
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    tc solve();
    return 0;
}