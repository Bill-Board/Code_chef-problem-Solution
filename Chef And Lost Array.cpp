//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int cnt[32][N];
void solve()
{
    int n, q; cin>> n>> q;
    vector<int>ans(n+2,2147483647);
    vector<pair<pair<int,int>,int > > a;
    vector<int>ache[n+2],nai[n+2];
    while(q--){
        int l,r, v;
        cin>> l >> r >> v;
        a.push_back({{l,r},v});
        ache[l].push_back(v);
        nai[r+1].push_back(v);
    }
    vector<int>ok(32,0);
    for(int i = 1; i<=n; i++){
        for(auto j: nai[i]){
            for(int k = 0; k<32; k++)
                if(!((1<<k)&j))
                ok[k]--;
        }
        for(auto j: ache[i]){
            for(int k = 0; k<32; k++)
                if(!((1<<k)&j))
                ok[k]++;
        }
        int kot = 0;
//        for(int k = 0; k<32 ; k++)
//            cout << ok[k] << " \n"[k==31];
        for(int k = 0; k<32 ; k++)
            if(ok[k]==0)kot|=(1<<k);
//        cout << kot << '\n';
        ans[i]&=kot;
    }

//    for(int i = 1; i<=n; i++)
//        cout << ans[i] << " \n"[i==n];

    for (int i = 0; i < 31; i++) {
        cnt[i][0] = 0;
        for (int j = 1; j <= n; j++) {
            cnt[i][j] = cnt[i][j - 1];
            if (ans[j] & (1 << i))
                cnt[i][j]++;
        }
    }

    for(auto i: a){
        int L=i.first.first, R=i.first.second, v= i.second;
        int ans = 0;
        for (int i = 0; i < 32; i++) {
        int noOfOnes = cnt[i][R] - cnt[i][L - 1];
            if (noOfOnes ) {
                ans |= (1 << i);
            }
        }
        if(ans != v){
            cout << -1 << '\n';
            return;
        }
    }
    for(int i = 1; i<=n; i++)
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
