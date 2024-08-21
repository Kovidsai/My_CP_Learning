#include<bits/stdc++.h>
using namespace std;
// #define int long long
signed main(void){
    int n; cin>>n;
    int sm = (n*(n+1))/2;
    if(sm%2!=0) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<'\n';
    set<int> s1, s2;
    vector<int> nums(n+1);
    for(int i=1; i<=n; i++) nums[i]=i;
    if(n%2==0){
        int i=1, j=n;
        while(i<j){
            s1.insert(nums[i]);
            s1.insert(nums[j]);
            if((j-i)!=1){
                s2.insert(nums[i+1]);
                s2.insert(nums[j-1]);
            }
            i +=2;
            j -=2;
        }
        cout<<s1.size()<<"\n";
        for(auto x: s1){
            cout<<x<<" ";
        }
        cout<<"\n"<<s2.size()<<"\n";
        for(auto x: s2){
            cout<<x<<" ";
        }
    }
    else{
        int i=4, j=n;
        while(i<j){
            s1.insert(nums[i]);
            s1.insert(nums[j]);
            if((j-i)!=1){
                s2.insert(nums[i+1]);
                s2.insert(nums[j-1]);
            }
            i +=2;
            j -=2;
        }
        cout<<s1.size()+2<<"\n";
        cout<<1<<" "<<2<<" ";
        for(auto x: s1){
            cout<<x<<" ";
        }
        cout<<'\n'<<s2.size()+1<<"\n";
        cout<<3<<" ";
        for(auto x: s2){
            cout<<x<<" ";
        }
    }
    return 0;
}