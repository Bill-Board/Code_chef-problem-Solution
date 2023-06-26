//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a+b)%MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); a -= b; normal(a,MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while(p) { if(p&1) r = modMul(r, b,MOD); b = modMul(b, b,MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD-2,MOD); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD),MOD); }


ll alabu(ll n){
    ll ans = modMul(n, modMul(n+1, modAdd(modMul(2ll, n,mod) , 1,mod), mod), mod);
    ans = modDiv(ans, 6ll, mod);
    return ans;
}

void solve(int tc)
{
    ll n; cin >> n;
    ll ans = modAdd(alabu(n) , alabu(n-1), mod);
    ll sum = modDiv(modMul(n, n-1, mod), 2ll,mod);
    cout << modMul(2022, modAdd(sum, ans, mod), mod) << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
