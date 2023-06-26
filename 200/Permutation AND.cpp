//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int alabu(int n){
    int cnt = 0;
    while(n>0){
        n/=2;
        cnt++;
    }
    return (1<<cnt)-1;
}

void solve()
{
    int n; cin >> n;
    if(n==1){
        cout << "1\n1" << '\n';
        return;
    }
    if(n&1){
        cout << -1 << '\n';
        return;
    }
    for(int i = 1; i<=n; i++)
        cout << i << " \n"[i==n];
    vector<int>ans(n+2,0);
    for(int i = n; i>0; i--){
        if(ans[i]==0)
            ans[i]=i^alabu(i), ans[i^alabu(i)]=i;
    }
    for(int i =1; i<=n; i++)
        cout << ans[i] << " \n"[i==n];
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
