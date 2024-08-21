#include<bits/stdc++.h>
using namespace std;
#define int long long
struct DSU{
    int num_comps;
    vector<int> dsu, size;
    DSU(int n) : dsu(n), size(n), num_comps(n) {
        iota(dsu.begin(), dsu.end(), 0);
        iota(size.begin(), size.end(), 1);
    }

    int find_parent(int a){
        if(dsu[a]==a) return a;
        return dsu[a] = find_parent(dsu[a]);
    }

    void merge(int a, int b){
        a = find_parent(a); b =  find_parent(b);
        if(a==b) return;
        if(size[b]>size[a]) swap(a, b);
        dsu[b] = a;
        num_comps--;
        // cout<<size[a]<<" "<<size[b]<<"\n";
        size[a] += size[b];
    }
};

struct Edge{
    int u, v, c;
};

signed main(void){
    int n, m; cin>>n>>m;
    vector<Edge> edges(m);
    for(auto& x : edges){
        cin>>x.u>>x.v>>x.c; x.u--; x.v--;
    }

    sort(edges.begin(), edges.end(), [&](Edge &a, Edge &b){ return a.c<b.c; });
    DSU dsu(n);
    int cost=0;
    for(auto &edge: edges){
        if(dsu.find_parent(edge.u)==dsu.find_parent(edge.v)) continue;
        else{
            dsu.merge(edge.u, edge.v); 
            cost += edge.c;
        } 
    }
    if(dsu.num_comps<=1) cout<<cost;
    else cout<<"IMPOSSIBLE";
    return 0;
}