//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


template <typename T>
struct BIT {
      T n;
      vector <T> Tree;
      void init(T N) {
            n = N;
            Tree = vector <T> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos] += val;
                  pos += (pos & -pos);
            }
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos];
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }
      void clear_(){ Tree.clear(); }
};

void solve(int tc)
{
    int n, k; cin >> n >> k;
    vector<ll> a(n), b(n);
    vector<pii> vp;
    for(auto &i: a)
        cin >> i;
    for(int i = 0; i<n; i++){
        cin >> b[i];
        vp.push_back({a[i]+b[i], a[i]});
    }
    sort(vp.begin(),vp.end());
    BIT <ll> p;
    p.init(n);
    //for(auto i: vp)
        //cout << i.first.first << " " << i.first.second << " " << i.second.first << " " << i.second.second << '\n';
    for(int i = 0; i<n; i++)
        p.update(i+1, vp[i].first);
    int cr_h = 0;
    for(int i = 1; i<=n; i++){
        ll kot = p.query(i, i);
        p.update(i, -kot);
        ll nk = k-vp[i-1].second;
        int l = 0, h = n, ans = 0;
        while(l <= h){
            int mid = (l + h)/2;
            ll val;
            if(mid == 0)
                val = -1;
            else
                val = p.query(1ll, mid);
            if(val <= nk)
                l = mid + 1, ans = mid;
            else
                h = mid - 1;
        }
        if(ans < i and 0<=nk)
            ans ++;
        cr_h = max(cr_h, ans);
        p.update(i, kot);
    }
    cout << min(n,cr_h) << '\n';
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
