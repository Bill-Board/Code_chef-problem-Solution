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
    int a,b,n;
    cin>> a >> b >> n;
    if(a==b)
        cout << 0 << '\n';
    else if((a^b)<n)
        cout << 1 << '\n';
    else {
        int c = a^b;
        for(int i = 0;i<31;i++)
            if((1<<i)&c and (1<<i)>=n){
                cout << -1  << '\n';
                return;
            }
        cout << 2 << '\n';
    }
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
