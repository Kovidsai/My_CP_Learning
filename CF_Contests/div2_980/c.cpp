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

// int cnt_inv(vector<pair<int, int>> &arr){
//     vector<int> temp;
//     for(auto &[u, v]: arr){
//         temp.push_back(u);
//         temp.push_back(v);
//     }
//     int cnt=0;
//     stack<int> st;
//     for(auto &x: temp){
//         while(!st.empty() && st.top()>x){
//             st.pop();
//             cnt++;
//         }
//         st.push(x);
//     }
//     return cnt;
// }

void solve(){
    int n; cin>>n;
    vector<pair<int, int>> ver1(n);
    // vector<pair<int, int>> ver2;
    for(auto &[u, v]: ver1){ 
        cin>>u>>v;
        // ver2.push_back({v, u});
    }
    sort(ver1.begin(), ver1.end(), [&](pair<int, int> p1, pair<int, int> p2){
        return (p1.first+p1.second)<(p2.first+p2.second);
    });
    // sort(ver2.begin(), ver2.end());
    // int t1 = cnt_inv(ver1);
    // int t2 = cnt_inv(ver2);
    // if(t1<t2){
        for(auto &[u, v]: ver1){
            cout<<u<<" "<<v<<" ";
        }
    // }
    // else{
    //     for(auto &[u, v]: ver2){
    //         cout<<v<<" "<<u<<" ";
    //     }
    // }
    cout<<'\n';
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