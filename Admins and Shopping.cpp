//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n, x, mn = LLONG_MAX;
    cin >> n >> x;
    vector <ll> a(n);
    for(auto &i : a)
        cin >> i, mn = min(mn, i);
    ll cr_h = (x + mn -1 ) / mn;
    cout << max(n, cr_h) << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
