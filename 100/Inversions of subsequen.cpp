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

using ll = long long;
using pii= pair<int,int>;

typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ott;
/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe
const int N=200005;
ll mod= 998244353;


void solve(int tc)
{
    ll n, cnt = 0, ans = 1; cin >> n;
    ott s;
    vector<int> a(n), b(n+1), c(n+1);
    for(auto &i: a){
        cin >> i;
        int val = s.order_of_key(i);
        if(val < s.size())
            b[i]++;
        s.insert(i);
    }
    reverse(a.begin(),a.end());
    s.clear();
    for(auto i: a){
        int val = s.order_of_key(i);
        if(val)
            c[i]++;
        s.insert(i);
    }
    for(int i = 1; i<=n; i++){
        if(b[i]+c[i] == 0){
            cnt++;
            ans = (ans * 2) % mod;
        }
    }
    if(cnt == n) ans = (ans - 1 + mod) % mod;
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
