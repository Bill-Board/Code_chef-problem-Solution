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
    int n, q; cin >> n >> q;
    multiset<int> s;
    vector<int> a(n+2, 0), p(n+4, 0);
    for(int i= 1; i<=n; i++)
        cin >> a[i], s.insert(0);
    for(int i = 1; i<n; i++){
        p[i] = max(0, a[i] -a[i+1]);
        s.insert(p[i]);
    }
    while(q--){
        int pos, val; cin >> pos >> val;
        s.erase(s.find(p[pos-1]));
        if(pos<n)
            s.erase(s.find(p[pos]));

        a[pos] = val;

        p[pos-1] = max(0, a[pos-1] - a[pos]);
        s.insert(p[pos-1]);

        if(pos < n){
            p[pos] = max(0, a[pos] - a[pos+1]);
            s.insert(p[pos]);
        }
        cout << *s.rbegin() << '\n';
    }
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
