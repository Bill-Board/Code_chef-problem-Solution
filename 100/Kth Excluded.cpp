//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
const int N=210015;






void solve()
{
    int n , q;
    cin >> n >> q;
    set <ll > s;
    for(int i = 0; i < n ; i++){
        ll x;
        cin >> x;
        s.insert(x);
    }
    s.insert(0ll);
    s.insert((ll) (2* 1e18 + 200) );
    vector< ll > a, pre(s.size());
    for(auto i : s)
        a.push_back(i);
    n = s.size();
    for(int i = 1; i < s.size() ; i++){
        pre[i] = a[i] - a[i-1] -1;
        pre[i] += pre[i-1];
    }
//    for(int i =1; i<n ; i++)cout << a[i] << " ";
//        cout << endl;
//    for(int i =1; i<n ; i++)cout << pre[i] << " ";
//        cout << endl;

    while(q--){
        ll x; cin >> x;
        ll pos = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
        pos = max(0ll, pos - 1);
        cout << a[pos] + x - pre[pos] << endl;
    }

}



signed main()
{

    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
