// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string str, seq;
//         cin>>str>>seq;
//         int n= str.length(), m= seq.length();
//         int i=0, j=0;
//         int chk=0, count=n;
//         while(i<m){
//             for(int k=j; k<n; k++){
//                 if(str[i]==seq[k]) {
//                     j=k+1;
//                     chk = 1;
//                     break;
//                 }
//             }
//             if(chk==0) count++;
//             else {chk=0;}
//             i++;
//         }
//         cout<<count<<'\n';
//     }
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string str, seq;
//         cin>>str>>seq;
//         int j=0;
//         int count =  str.length()+seq.length();
//         for(int i=0; i<seq.length(); i++){
//             for(int k=j; k< str.length(); k++){
//                 if(str[k]==seq[i]) {
//                     j=k+1;
//                     count--;
//                     break;
//                 }
//             }
//         }
//         cout<<count<<'\n';
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
// #define lil long long int
// #define sort(xyz) sort(xyz.begin(),xyz.end())
// const int MOD = 1e9 + 7;
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int ans=0;        
        // cout<<a<<" "<<b;
        for(int i=0;i<b.size();i++)
        {
            int k=i,t=0;
            for(int j=0;j<a.size();j++)
            {
              if(k==b.size()) break;
                if(b[k]==a[j])
                {
                    k++;
                }
                
                ans=max(ans,k-i);
            }
            
        }   
        cout<<a.size()+b.size()-ans<<endl;
        
    }
}
