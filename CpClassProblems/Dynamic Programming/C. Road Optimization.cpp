#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l, k; cin>>n>>l>>k;
    vector<int> dist, tim(n);
    int pp;
    for(int i=0; i<n; i++){
        cin>>pp;
        dist.push_back(pp);
    }
    dist.push_back(l);
    for(auto &x: tim) cin>>x;
    // dist[n-1] = k;
    // for(auto &x: dist) cout<<x<<" ";
    int tim_red = 0;
    int tim_req=0;
    for(int i=0; i<n; i++){
        tim_req += (tim[i]*(dist[i+1]-dist[i]));
        // cout<<tim[i]<<" ";
    }
    int cnt=0;
    while(k){
        int min_tim_red = 0, node = 0, curr=0;
        for(int i=1; i<dist.size()-1; i++){
            curr = (((dist[i+1]-dist[i])*tim[i-1]) - ((dist[i+1]-dist[i])*tim[i]));
            if(curr<min_tim_red) {
                min_tim_red = curr;
                node = i;
            }
        }
        if(node!=0){
            dist.erase(dist.begin()+node);
            tim_red += min_tim_red;
            k--;
        }
        else{
            cnt++;
        }
    }  
    cout<<(tim_req+tim_red);
    return 0;
}