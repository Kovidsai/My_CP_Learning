#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define int ll

signed main(void){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    
    // Binary Search
    int l=0, r=1e18+100, ans =-1;
    while(l<=r)
    {
        auto ok = [&](int t){
            // __int128_t sum=0;
            int sum = 0;
            for(int i=0; i<n; i++)
            {
                sum += t/v[i];
                if(sum>=k) return true;
            }
            return sum>=k;
        };

        int mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans;
    return 0;
}