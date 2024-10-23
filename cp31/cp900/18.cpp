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
    int a, b, c; cin>>a>>b>>c;
    if((b-a)==(c-b)){
        cout<<"YES"<<'\n';
        return;
    }
    int d = b-a;
    // d1 = b-a;
    // d2 = c-b;
    // d3 = (c-a)/2;
    int d1 = b-a;
    int t = a + (2*d1);
    // debug(t);
    // cout<<"t = "<<t<<'\n';
    if(t!=0 && t%c==0 && ((t>0 && c>0) || (t<0 && c<0))){
        cout<<"YES"<<"\n";

        return;
    }
    // debug(t);

    int d2 = (c-a)/2;
    t = a + d2;
    if(t!=0 && t%b==0 && (c-a)%2==0 && ((t>0 && b>0) || (t<0 && b<0))) {cout<<"YES"<<'\n'; return;}
    int d3 = (c-b);
    t = b-d3;
    // debug(t);
    if(t!=0 && t%a==0 && ((t>0 && a>0) || (t<0 && a<0))){
        cout<<"YES"<<'\n';
        return;
    }
    cout<<"NO"<<'\n';
    return;    
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