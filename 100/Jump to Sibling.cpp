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
    vector<int> a(n), suf(n+2, 0);
    for(auto &i : a)
        cin >> i;
    if(a.front()% 2 == a.back() % 2){
        int cnt = 0;
        for(auto i: a)
            cnt += (a.front() % 2 == i % 2 );
        cout << cnt - 1<< endl;
        return;
    }

    for(int i = n - 1; i >= 0; i--)
        suf[i] += suf[i+1] + (a.back() % 2 == a[i] % 2);
    int cr_h = INT_MAX;
    for(int i = 0, k = 0; i< n ; i++){
        if(a.front() % 2 == a[i] % 2){
            cr_h = min(cr_h, k + suf[i]);
            k++;
        }
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
