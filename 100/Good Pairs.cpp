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
    int n; cin >> n;
    map<int, int> mpp;
    vector<int> a(n), b(n);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    ll cr_h = 0;
    for(int i = 0; i < n ; i++){
        int kot = a[i]^b[i];
        cr_h+=mpp[kot];
        mpp[kot]++;
    }
    cout << cr_h << endl;
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
