//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n; cin >> n;
    ll sum = 1;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        sum *= a[i];
    }
    ll ans = 2022;
    if(sum == 1){
        ans *= n;
        cout << ans << '\n';
        return;
    }
    ans *= sum + (n - 1);
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
