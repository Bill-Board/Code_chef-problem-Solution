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
    ll n, m, l;
    cin >> n >> m >> l;
    if( m < l or n == 0){
        cout << m << endl;
        return;
    }
    if(l == 1 or (l <= m and m<=(l + n -1)) ){
        cout << 0 << endl;
        return;
    }
    ll last = l + n - 1;
    while( l<=last){
        m %= last;
        last = m;
    }
    cout << m << endl;
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
