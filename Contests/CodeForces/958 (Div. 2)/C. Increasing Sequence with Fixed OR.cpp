#include<bits/stdc++.h>
using namespace std;
#define int long long 

/*
It's obvious that the answer only depends on the popcount of n
. Below, we assume n=2^k−1
. If k=1
, it is shown in the samples that the length is 1
.

Otherwise, the maximum sequence length for 2^k−1
 is k+1
. This can be achived by ai=n−2^(i−1) (1≤i≤k),a[k+1]=n
.

*/




signed main(void){
    int t; cin>>t;
    while (t--)
    {
        // INT64_MAX
        __int64 n, p=1;
        cin >> n;
        int k = (log2(n))+1;
        // n = (1<<k)-1;
        if(n==1){
            cout<<1<<'\n'<<1<<'\n';
            continue;
        }
        int temp = n;
        vector<int> a;
        a.push_back(n);
        for(int i=0; i<k; i++){
            temp = (n-(p<<i));
            if((temp|n)==n){
                a.push_back(temp);
            }
        }
        if(a.back()==0) a.pop_back();
        reverse(a.begin(), a.end());
        unique(a.begin(), a.end());
        cout<<a.size()<<"\n";
        for(auto &x:a) cout<<x<<" ";
        cout<<'\n';
    }

    return 0;
}