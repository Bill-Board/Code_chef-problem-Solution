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
    int n, k;
    cin >> n>> k;
    if(k == 0){
        if(n%4)cout << "On" << endl;
        else cout << "Off" << endl;
        return;
    }
    if(n % 4 == 0)
        cout << "On" << endl;
    else
        cout << "Ambiguous" << endl;
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
