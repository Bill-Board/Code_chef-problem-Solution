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
    int n, a, b;
    cin >> n >> a >> b;
    if(a<b)swap(a,b);
    int k = (1ll<<n) - 1;
    int ans = (k ^ (a|b));

    a ^= ans; b ^= ans;

    bool ok = false;
    for(int i = n-1; 0<=i ; i--){
        if(ok and ((1<<i)&b) and !((1<<i)&a))
            b ^= (1<<i), a |= (1<<i), ans |= (1<<i);
        if((1<<i)&b)
            ok=true;
    }
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
