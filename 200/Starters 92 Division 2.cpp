//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=105;
ll mod= 1e9+7;

ll dp[N][N], ft[N];

ll fact(int n){
    if (n < 2) return 1;
    ll &ans = ft[n];
    if(ans) return ans;
    return ans = n * fact(n - 1) %mod;
}

ll ncr(int n, int r){
    if(r==0 || n==r)return 1;
    if(n<r)return 0;
    ll &ans = dp[n][r];
    if(ans != -1) return ans;
    return ans = (ncr(n-1,r)+ncr(n-1,r-1))%mod;
}

ll npr(int n , int r){
    return ncr(n, r)*fact(r)%mod;
}

void solve(int tc)
{
    ll n, k; cin >> n >> k;
    cout << npr(k, min(n, k)) << '\n';
}



signed main()
{
    memset(dp, -1, sizeof(dp));
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
