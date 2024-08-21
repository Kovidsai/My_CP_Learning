#include<bits/stdc++.h>
using namespace std;

struct DSU{
    int n;
    vector<int> dsu, size;
    DSU(int n) : dsu(n), size(n) {
        iota(dsu.begin(), dsu.end(), 0);
    }

    int find_parent(int v){
        if(dsu[v]==v) return v;
        return dsu[v] = find_parent(dsu[v]);
    }

    void merge(int a, int b){
        a = find_parent(a); b = find_parent(b);
        if(size[a]<size[b]) swap(a, b);
        dsu[b] = a;
        size[a] += size[b];
    }
};


int main(){
    int n, q; cin>>n>>q;
    
    //DSU
    DSU dsu(n);
    for(int i=0; i<q; i++){
        int u, v; cin>>u>>v;
        u--; v--;
        dsu.merge(u, v);
    }
    for(int i=0; i<n; i++){
        cout<<dsu.find_parent(i)+1<<'\n';
    }    

    return 0;
}



/*
    vector<int> root(n), size(n, 1);
    for(int i=0; i<n; i++) root[i]=i;
    // print_roots(root);


    function<int(int)> find_root = [&](int v){
        if(root[v]==v) return v;
        return root[v] = find_root(root[v]);
    };

    auto print_roots = [&](vector<int> &roots){
        for(int v=0; v<roots.size(); v++){
            cout<<"v: "<<v+1<<" root: "<<find_root(v)+1<<'\n';
        }
    };

    auto merge = [&](int a, int b){
        b = find_root(b); a = find_root(a);
        if(size[a]<size[b]) swap(a, b);
        size[a] += size[b];
        root[b] = a;
    };

    for(int i=0; i<q; i++){
        int u, v; cin>>u>>v;
        u--; v--;
        merge(u, v);
    }

    print_roots(root);
*/