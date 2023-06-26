//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

void solve()
{
    ll n, a = 1, b =1; cin >> n;
    if(n&1)
        a = n/2, b=a+1;
    else if(n!=2){
        if((n/2) &1)
            a = n/2 -2, b = n/2 +2;
        else
            a = n/2 -1, b = n/2 +1;
    }
    cout << lcm(a,b) - gcd(a,b) << "\n";
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
