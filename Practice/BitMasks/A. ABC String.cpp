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

string mkstr1(char x, string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]==x){
            s[i]=')';
        }
        else{
            s[i]='(';
        }
    }
    return s;
}
string mkstr2(char x, string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]==x){
            s[i]='(';
        }
        else{
            s[i]=')';
        }
    }
    return s;
}

bool isvalid(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')'){
            st.pop();
        }
        else return false;
    }
    return st.empty();
}

void solve(){
    string s; cin>>s;
    int a=0, b=0, c=0, n=s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='A') a++;
        if(s[i]=='B') b++;
        if(s[i]=='C') c++;
    }
    if(a==(n/2)){
        string s1 = mkstr1('A',s);
        string s2 = mkstr2('A',s);
        if(isvalid(s1) || isvalid(s2)){
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    else if(b==(n/2)){
        string s3 = mkstr1('B',s);
        string s4 = mkstr2('B',s);
        if(isvalid(s3) || isvalid(s4)){
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    else if(c==(n/2)){
        string s5 = mkstr1('C',s);
        string s6 = mkstr2('C',s);
        if(isvalid(s5) || isvalid(s6)){
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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