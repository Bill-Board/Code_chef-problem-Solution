//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    ll n, m, k, sum1 = 0, sum2 = 0, l = 1e18;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for(auto &i: a){
        cin>> i;
        sum1 += i;
    }
    for(auto &i: b){
        cin>> i;
        sum2 += i;
    }
    if(k == 1){
        cout << -1 << '\n';
        return;
    }
    int cr_h = INT_MAX;
    for(int i = 0; i<=(n+m+2); i++){
        int l = 0, r = n+m+2, ans = n+m+2;
        while(l <= r){
            ll mid = (l + r)/ 2;
            ll ek = (sum1 + (ll)k*i) * (m + mid);
            ll dui = (sum2 + mid) * (n + i);
            if(ek > dui) /// possible
                r = mid - 1, ans = mid;
            else
                l = mid + 1;
        }
        cr_h = min(cr_h, i + ans);
    }
    cout << cr_h << '\n';
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
