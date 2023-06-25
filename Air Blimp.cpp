//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll n, x, y; cin >> n >> x >> y;
    vector<ll> a(n);
    for(auto &i : a)
        cin >> i;
    ll sum  = 0, cr_h = 0;
    for(int i = n-1; ~i; i--){
        ll cur = a[i] - sum;
        if(cur <= 0 )continue;
        ll kot = 0;
        if(x > y){
            kot = (cur + x - 1)/ x;
            sum+=(kot * y);
        }
        else{
            kot = (cur + y - 1)/ y;
            sum+=(kot * y);
        }
        cr_h += kot;
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
