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
    vector<int>a(n+4, 0), ke(n+2,0), ans, ark(n+2,0);
    vector<pair<int,int> > vp(n+2);
    for(int i = 1; i<=n; i++){
        int l, r; cin >> l >> r;
        vp[i].first=l;vp[i].second=r;
        if(l<=i and i<=r){
            ke[i] = 1;
        }
        a[l]++,a[r+1]--;
    }
    for(int i =1; i<=n; i++){
        a[i]+=a[i-1];
        if(a[i] == n-1 and ke[i]==0)
            ans.push_back(i);
    }
    cout << ans.size() << '\n';
    for(auto i: ans)
        cout << i << "\n";

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
