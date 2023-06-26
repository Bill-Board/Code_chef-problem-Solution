//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

ll alabu(vector<ll> a, int pos){
    ll cnt = 0,n = a.size();
    for(int i = pos; i<n-1 ; i+=2)
        cnt += max(0ll, max(a[i-1],a[i+1]) - a[i] + 1);
    return cnt;
}

void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;
    ll cr_h = alabu(a, 1);
    if(n&1){
        cout << cr_h << '\n';
        return;
    }
    cr_h = min(alabu(a, 2), cr_h);
    vector<ll> pre(n, 0), suf(n, 0);
    for(int i = 1; i<n-1; i+=2)
        pre[i] = max(0ll, max(a[i-1],a[i+1]) - a[i] + 1);
    for(int i =1; i<n; i++)
        pre[i]+=pre[i-1];




    for(int i = n-2; i>0; i-=2)
        suf[i] = max(0ll, max(a[i-1],a[i+1]) - a[i] + 1);
    for(int i = n-2; i>=0; i--)
        suf[i]+=suf[i+1];

//    for(auto i: pre)cout << i << " ";cout << '\n';
//    for(auto i: suf)cout << i << " ";cout << '\n';

    for(int i = 1; i<n-2; i++)
        cr_h = min(cr_h, pre[i] + suf[i+2]);
    cout << cr_h << '\n';

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
