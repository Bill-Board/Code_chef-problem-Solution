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
    ll n ;cin >> n;
    ll sum = 0;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i, sum += i;
    sum /= (n+1);
    for(auto i: a)
        cout << i - sum << " ";
    cout << '\n';

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
