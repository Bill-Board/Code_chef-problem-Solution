//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool is_power_oftwo(int n)
{
    return n and !(n & (n-1));
}

void solve()
{
    int l, r;cin >> l >> r;
    if(l&1){
        int a = l+1, b= l+2, c= l+3, d = l+4;
        if((a ^ b ^ c ^ d) == 0 and d <= r)
        {
            cout << a << " " << b << " " << c << " " << d << '\n';
        }
        else
            cout << -1 << endl;
    }
    else
        cout << l << " " << l+1 << " " << l+2 << " " << l+ 3 << endl;


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
