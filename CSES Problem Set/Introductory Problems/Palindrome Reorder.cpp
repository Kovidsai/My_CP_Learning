#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    string s; cin>>s;
    int n = s.length();
    vector<int> freq(26);
    for(int i=0; i<n; i++){
        freq[s[i]-'A']++;
    }
    int chk=0, odd_l =-1;
    for(int i=0; i<26; i++){
        if(freq[i]%2!=0){
            odd_l = i;
            chk++;
        }
    }
    if(chk>1){
        cout<<"NO SOLUTION"<<'\n';
        return 0;
    }
    string p="", rp;
    for(int i=0; i<26; i++){
        if(i != odd_l) {
            for(int j=0; j<(freq[i]/2); j++){
                p += ('A'+i);
            }
        }        
    }
    rp = p;
    if(odd_l!=-1){
        for(int i=0; i<freq[odd_l]; i++){
            rp += ('A'+odd_l);
        }
    }
    reverse(p.begin(), p.end());
    rp = rp+p;
    cout<<rp<<'\n';
    return 0;
}