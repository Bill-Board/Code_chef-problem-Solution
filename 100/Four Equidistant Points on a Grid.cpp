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
    ll n;
    cin >> n;
    if(n&1)
    {
        cout <<-1 <<endl;
        return ;
    }
    cout << n/2 << " " << 0 << endl;
    cout << - n/2 << " " << 0 << endl;
    cout << 0 << " " << n/2 << endl;
    cout << 0 << " " << - n/2 << endl;

}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
