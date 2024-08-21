#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(void){
    int t; cin>>t;
    while(t--){
        int n, k, op=0; cin>>n>>k;
        multiset<int> s;
        s.insert(n);
        while(s.size()<n){
            op++;
            int temp = *prev(s.end());
            if(temp==1) break;
            s.erase(prev(s.end()));
            if(temp<=k){
                for(int i=0; i<temp; i++){
                    s.insert(1);
                }
                break;
            }
            for(int i=0; i<k-1; i++){
                s.insert(1);
                temp -= 1;
            }
            s.insert(temp);
        }
        cout<<op<<'\n';
    }

    return 0;
}