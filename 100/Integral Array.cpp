//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());
long long get_rand(long long l, long long r) { // random number from l to r
  assert(l <= r);
  return l + rnd() % (r - l + 1);
}

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector <int > a(n);
    set<int>s;
    for(auto &i : a)
        cin >> i,
        s.insert(i);
    sort(a.begin(),a.end());
    int lop = max(1000ll, n);
    for(int i =0; i<lop; i++)
    {
        int l = a[get_rand(0ll, n-1)], r= a[get_rand(0ll, n-1)];
        if(l>r)swap(l,r);
        int kot = r / l;
        if(s.find(kot)==s.end())
        {
            cout << "No" << endl;
            return ;
        }
    }
    cout << "Yes" << endl;

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
