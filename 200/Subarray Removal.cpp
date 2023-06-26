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
    vector<ll> a(n+1), cnt(n+1);
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        cnt[a[i]] = i;
    }
    set<int> s;
    int l = cnt[n], r = cnt[n], ans = 1;
    for(int i = n; 1<i; i--){
        int k = cnt[i];
        if(k <= l){
            for(int j = k; j <= l; j++)
                s.insert(a[j]);
            l = k;
        }
        if(r <= k){
            for(int j = r; j <= k; j++)
                s.insert(a[j]);
            r = k;
        }
        int ft = *s.begin(), lst = *s.rbegin();
        if(ft == 1) break;
        //cout << ft << ' ' << lst << ' ' << s.size() << '\n';
        if(lst - ft + 1 == s.size())
            ans = max(ans, r - l + 1);//, cout << "yes\n";
    }
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
