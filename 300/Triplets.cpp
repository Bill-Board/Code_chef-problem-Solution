//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    ll p, q, r; cin >> p >> q >> r;
    vector<ll>a(p+1),b(q+1), c(r+1), pre1(p+2), pre2(r+3);

    for(int i = 1; i<=p; i++)
        cin >> a[i];
    for(int i = 1; i<=q; i++)
        cin >> b[i];
    for(int i = 1; i<=r; i++)
        cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for(int i = 1; i<=max(p,r); i++){
        if(i <= p)
            pre1[i] = pre1[i-1] + a[i];
        if(i <= r)
            pre2[i] = pre2[i-1] + c[i];
    }
    ll cr_h = 0;
    for(int i = 1; i<=q; i++){
        ll u = upper_bound(a.begin(),a.end(), b[i]) - a.begin() - 1;
        ll v = upper_bound(c.begin(),c.end(), b[i]) - c.begin() - 1;
        //cout << u << ' ' << v << '\n';
        ll ek = ((v * b[i])% mod) * pre1[u] % mod;
        ek += ((u * b[i])% mod) * pre2[v]; ek %= mod;
        ek += (pre1[u]*pre2[v] % mod); ek %= mod;
        ek += (((b[i] * b[i]) % mod) * ((u * v) % mod)) %mod;
        ek %= mod;
        cr_h = (cr_h + ek) % mod;
    }
    cout << cr_h << '\n';
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
