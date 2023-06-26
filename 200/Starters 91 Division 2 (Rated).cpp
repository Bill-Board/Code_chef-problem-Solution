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
bool ispow(ll n){
    return n and !(n &(n-1));
}

void solve(int tc)
{
    ll l ,r; cin >> l >> r;
    if( r <= 100){
        ll cnt = 0;
        for(int i = l; i<=r; i++){
            for(int j = i; j<=r; j++)
                cnt += ((i^j) == (i+j));
        }
        cout << cnt << '\n';
        return;
    }


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
