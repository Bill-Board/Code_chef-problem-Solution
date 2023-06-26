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
    ll n, k =0;
    cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(n&1){
        cout << 1 << endl;
        return;
    }
    ll sq = sqrt(n);
    if(sq * sq == n){
        cout << 1 << endl;
        return;
    }
    while(n % 2 == 0)
        n /= 2, k ++;
    if(k & 1)
        cout << -1 << endl;
    else
        cout << (n !=1 ) + (k != 0) << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
