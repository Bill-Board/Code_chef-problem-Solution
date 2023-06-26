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
    ll n, one = 0, two = 0;
    cin >> n;
    for(int i =0; i<n ; i++){
        int x;
        cin >> x;
        one += x==1;
        two += x==2;
    }
    ll ek = one *(one-1) / 2, dui = two *(two-1) / 2;
    cout << ek + dui + one * (n - one)  << endl;

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
