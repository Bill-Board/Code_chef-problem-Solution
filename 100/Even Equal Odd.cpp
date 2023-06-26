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
    int n; cin>> n;
    vector<int> a(2*n);
    int e = 0, o = 0;
    for(auto &i: a)
        cin >> i,
        e += (i % 2 == 0),
        o += (i % 2 == 1);
    if(o >= e){
        cout << (o-e)/2 << '\n';
        return;
    }
    vector<int> ans;
    int koita = abs(e - o)/2;
    for(auto i: a){
        if(i%2 == 1)continue;
        int p = i, cnt  = 0;
        while(p%2==0)
            cnt ++, p /= 2;
        ans.push_back(cnt);
    }
    sort(ans.begin(),ans.end());
    int cr_h = 0;
    for(int i = 0; i<koita; i++)
        cr_h += ans[i];
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
