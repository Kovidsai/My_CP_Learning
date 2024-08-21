#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<pair<vector<int>, int>> adj(n);
    vector<int> indeg(n);
    for(int i=0; i<n-1; i++){
        int u, v; 
        cin>>u>>v; 
        u--; v--;
        indeg[v]++;
        adj[u].first.push_back(v);
    }
    vector<int> goal(n);
    for(int i=0; i<n; i++){
        cin>>adj[i].second;
    }
    for(auto &x:goal) cin>>x;























    vector<int> topo(n);
    queue<pair<int, int>> q;
    for(int i=0; i<n; i++){
        if(indeg[i]==0){
            q.push({i, 0});
        }
    }


    /*

    REMEMBER!!
    
    THIS APPROACH OF MAINTAINING ODD EVEN LEVELS DOESN'T WORK HERE CAUSE WE ARE 
    NOT ONLY UPDATING THE CHILDREN OF CHILDREN ALSO UPDATING EVERY ODD LEVEL NODE 
    SO THIS GIVES US A WRONG OUTPUT. 
    
    */
    // int odd_op=0, even_op=0;
    int count=0;
    vector<int> change;
    while(!q.empty()){
        int v = q.front().first;
        int lev = q.front().second;
        q.pop();
        int giv = adj[v].second; 
        int tobe = goal[v];
        // if(lev%2==0){  //even level
        //     // cout<<v<<" "<<giv<<" "<<tobe<<'\n';
        //     if(even_op) giv = 1^giv;
        //     if(giv!=tobe) {
        //         even_op = even_op^1;
        //         count++;
        //         change.push_back(v);
        //     }
        // }
        // else{
        //     // cout<<v<<" "<<giv<<" "<<tobe<<'\n';
        //     if(odd_op) giv = 1^giv;
        //     if(giv!=tobe){
        //         odd_op = odd_op^1;
        //         count++;
        //         change.push_back(v);
        //     } 
        // }
        for(auto &x: adj[v].first)
        {
            indeg[x]--;
            if(indeg[x]==0){
                // cout<<x<<" ";
                q.push({x, lev+1});
            }
            
        }
        // lev++;
    }
    cout<<count<<"\n";
    for(auto &x:change) cout<<x+1<<"\n";
    return 0;
}