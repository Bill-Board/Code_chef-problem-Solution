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
    ll a, b;
    cin >> a >> b;
    ll c = __gcd(a ,b);
    while(__gcd(b, c) != b){
        if (__gcd(b, c) == 1){
            cout << "No" << endl;
            return;
        }
        b /= __gcd(b, c);
    }
    cout << "Yes" << endl;
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
