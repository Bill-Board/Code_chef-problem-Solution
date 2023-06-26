//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
vector<ll> a, b;
ll n;

bool alabu(ll mid){
    int koita = n/2;
    for(int i = 0, j = koita -1; i<koita; i++,j--)
            if(a[i]+b[j]>=mid)return false;
    for(int i = koita, j = n -1; i<n; i++, j--)
        if(a[i]+b[j]<mid)return false;
    return true;
}

void solve()
{
    cin >> n;
    a.clear();a.resize(n);
    b.clear();b.resize(n);
    for(auto &i: a)cin >> i;
    for(auto &i: b)cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(),b.end());
    ll l = 0, r = 1e17, ans = 1;
    while(l <= r){
        ll mid = (l + r)/2;
        if(alabu(mid))
            l = mid+1, ans= mid;
        else
            r= mid-1;
    }
    for(ll i = max(1ll, l-10); i <= r+10; i++)
        if(alabu(i))ans = max(i, ans);
    cout << ans << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
