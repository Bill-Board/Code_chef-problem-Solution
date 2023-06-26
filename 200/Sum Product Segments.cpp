//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

bool alabu(ll l, ll r , ll x, ll ek){
    ll dui = (x - ek);
    if(ek> dui)swap(ek,dui);
    return ek>=0 and (dui < l or r < ek);
}


void solve(int tc)
{
    ll x, y; cin >> x >> y;
    for(ll i = 1; i*i <= y; i++){
        if(y % i == 0){
            ll l = i, r = y / i;
            //cout << l <<  ' ' << r << '\n';
            if(x < l){
                cout << 0 << ' ' << x << '\n';
                cout << l << ' ' << r << '\n';
                return;
            }
            if(alabu(l, r , x, l-1)){
                ll ek = l - 1, dui = x - ek;
                if(ek> dui)swap(ek,dui);
                cout << ek << ' ' << dui << '\n';
                cout << l << ' ' << r << '\n';
                return;
            }

            if(alabu(l, r , x, r+1)){
                ll ek = r + 1, dui = x - ek;
                if(ek> dui)swap(ek,dui);
                cout << ek << ' ' << dui << '\n';
                cout << l << ' ' << r << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
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
