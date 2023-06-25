//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

ll alabu(ll taka, ll a, ll b){
    ll choocklet = 1;
    if(taka < a)return 0ll;
    if(taka == a)return choocklet;
    ll kot =(taka - a) / (a-b);
    return choocklet + kot;
}

void solve()
{
    ll n, taka; cin >> n >> taka;
    vector<ll> a(n), b(n);
    vector<pair <ll, ll > > vp(n);
    for(auto &i: a)
        cin >> i;
    for(int i =0; i<n ; i++){
        cin>> b[i];
        vp[i].first = a[i] - b[i];
        vp[i].second = i;
    }
    sort(vp.begin(),vp.end());
    ll cr_h = 0;
    for(auto i: vp){
        ll kot = alabu(taka, a[i.second], b[i.second]);
        cr_h+= kot;
        taka -= (kot * i.first);
        //cout << a[i.second] << " " << b[i.second] << " " << kot << endl;
    }
    cout << cr_h << endl;
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
