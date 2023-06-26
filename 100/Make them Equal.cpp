//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
typedef long long ll;
const int N=200005;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if(a>b)swap(a,b);
    if(a>c)swap(a,c);
    if(b>c)swap(b,c);

    vector<ll> v;
    for(int i = 0; i<63; i++){
        v.push_back((1ll<<i) -1);
    }
    for(auto i: v){
        if((a+b+c+i)%3 != 0)continue;

        ll val = (a+b+c+i) / 3;
        ll lag_a = val - a;
        ll lag_b = val - b;
        ll lag_c = val - c;
        if(min({lag_a,lag_b,lag_c})<0)continue;

        if((lag_a+lag_b+lag_c)==i  and (lag_a|lag_b|lag_c)==i and (lag_a^lag_b^lag_c)==i and (lag_a&lag_b&lag_c)==0){
            cout << "YES\n";//cout << i.first << endl;
            return;
        }
    }
    cout << "NO\n";
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
