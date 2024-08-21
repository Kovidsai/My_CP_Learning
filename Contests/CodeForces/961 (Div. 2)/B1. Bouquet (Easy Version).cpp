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
    int n, k; cin>>n>>k;
    vector<int> petals(n), p(n);
    for(auto &x: petals) cin>>x;
    sort(petals.begin(), petals.end());
    p[0] = petals[0];
    for(int i=1; i<n; i++){
        p[i] = p[i-1] + petals[i];
    }
    int diff=0, num1= 0, num2;
    int sum=petals[0];
    int ans=petals[0];
    int i=1;
    while(i<n && num1<n){
        if((petals[i]-petals[num1])<=1){
            // debug(i);
            // debug(sum);
            sum += petals[i];
            if(sum>k){
                sum -= petals[num1];
                num1++;
            }
            i++;
            if(sum<=k){
                ans = max(ans, sum);
            }
        }
        else{
            num1++;
            i=num1+1;
            sum = petals[num1];
            ans = max(ans, sum);
        }
        // i++;
        // if((petals[i]==petals[num1]+1)){
        //     num2 = i;
        //     sum += petals[i];
        //     if(sum<=k){
        //         ans = max(ans, sum);
        //     }
        //     else{
        //         sum -= petals[num1];
        //         num1++;
        //     }
        // }
    }
    cout<<ans<<'\n';

}
signed main() {
    bolt;
    // #ifndef ONLINE_JUDGE
    //     freopen("Error.txt", "w", stderr);
    // #endif
    tc solve();
    return 0;
}