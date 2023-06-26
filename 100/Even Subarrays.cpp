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
vector<ll> a;
ll alabu(ll n, ll m)
{
    unordered_map <ll, ll> tb;
    tb[0] = 1;
    ll cnt = 0, curSum = 0;
    for (ll i = 0; i < n; i++)
    {
        curSum ^= a[i];
        if (tb.count(curSum ^ m))
            cnt += tb[curSum ^ m];
        tb[curSum]++;
    }
    return cnt;
}

void solve(int tc)
{
    ll n; cin >> n;
    a.clear();a.resize(n);
    for(auto &i: a)
        cin >> i;
    ll sum = 0;
    for(int i = 0; i*i<=n; i++){
        ll kot = i*i;
        sum += alabu(n, kot);
    }
    ll ans = (n * (n + 1))/2;
    cout << ans - sum << '\n';

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
