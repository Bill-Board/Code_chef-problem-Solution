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
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for(auto &i : a)
        cin >> i;
    for(auto &i : b)
        cin >> i;
    int ek = a.front(), dui=b.front();
    for(int i = 0; i<n; i++)
        ek &= a[i], dui &= b[i];
    int x = (ek ^ dui);
    for(int i = 0; i < n; i++)
        c[i] = (a[i]|x);
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++)
        if(c[i] != b[i])
            x=-1;
    cout << x << endl;
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
