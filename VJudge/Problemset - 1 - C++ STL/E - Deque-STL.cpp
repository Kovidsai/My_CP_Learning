#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    
    for(int i=0; i<q; i++)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        vector<int> ans;
        for(auto &x: v) cin>>x;
        deque<int> dq;
        for(int j=0; j<n; j++)
        {
            while(!dq.empty() && v[dq.back()]<v[j])
            {
                dq.pop_back();
            }
            dq.push_back(j);
            if(!dq.empty() && dq.front()==j-k) dq.pop_front();
            if(j>=k-1) ans.push_back(v[dq.front()]);
        }
        for(int j=0; j<ans.size(); j++) cout<<ans[j]<<" ";
        cout<<"\n";
    }
    return 0;
}