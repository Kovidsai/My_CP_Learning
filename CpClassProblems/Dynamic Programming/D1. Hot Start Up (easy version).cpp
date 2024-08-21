#include <bits/stdc++.h>
using namespace std;
#define int long long
/*
func(i,l1,l2) returns the minimum time
required for the programs a[i],a[i+1]..a[n]
if the last program ran on cpus are l1 and l2
*/
// int func(int i, int last1, int last2){
//     int min_tim;
//     if(i==n-1) {
//         if(last1==i || last2==i) return hot[i];
//         else cold[i];
//     }
//     min_tim = min(func(i+1, i, last2), func(i+1, last1, i));
//     if(last1==i || last2==i) min_tim += hot[i];
//     else min_tim += cold[i];
//     return min_tim;
// }
int dp[5001][5001];
int func(int i, int last, vector<int> &hot, vector<int> &cold, vector<int> &a, int n)
{
    int min_tim=1e15;
    if(dp[i][last] !=-1) return dp[i][last]; //take -1 as base for other
    // base case
    if (i == n)
    {
        return 0;
    }
    // when the i-th program is excuted on cpu1
    if(i>0){
         if (a[i-1] == a[i])
        {
            min_tim = min(min_tim, hot[a[i]] + func(i + 1, last, hot, cold, a, n));
        }
        else
        {
            min_tim = min(min_tim, cold[a[i]] + func(i + 1, last, hot, cold, a, n));
        }
    }
   
    // when the i-th program is excuted on cpu2
    if(last!=a[i-1])
    {
        if (last == a[i])
        {
            min_tim = min(min_tim, hot[a[i]] + func(i + 1, a[i-1], hot, cold, a, n));
        }
        else
        {
            min_tim = min(min_tim, cold[a[i]] + func(i + 1, a[i-1], hot, cold, a, n));
        }
    }
    return dp[i][last] = min_tim;
}

signed main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                dp[i][j] = -1;
            }
        }
        for(int i=0; i<5001; i++){
            for(int j=0; j<5001; j++){
                dp[i][j] = -1;
            }
        }
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
            x--;
        }
        vector<int> cold(k), hot(k);
        for (auto &x : cold)
            cin >> x;
        for (auto &x : hot)
            cin >> x;
        int min_tim = cold[a[0]]+func(1, a[0], hot, cold, a, n);
        // min_tim = cold[a[0]] + func(1, a[0], h)
        cout<<min_tim<<"\n";
    }
    return 0;
}

// 65+45+54+54+7
// 110+108+7
// 110+115
// 225