//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll alabu(map<int, int> mpp)
{
    ll p_sum =0, s_sum =0, cr_h =0;
    vector<pair<int, int > > a;
    for(auto i: mpp)
        a.push_back({i.first, i.second}),
        //cout << i.first << " " << i.second << endl,
        s_sum += i.second;
    //cout << endl;
    for(int i =0; i<a.size()-1 ; i++)
    {
        s_sum-=a[i].second;
        ll ans = (p_sum*s_sum) + (a[i].second*s_sum);
        cr_h += (ans * ( a[i+1].first - a[i].first) );
        p_sum+=a[i].second;
    }
    //cout << cr_h << endl;
    return cr_h;
}


void solve()
{
    int n, m;
    cin >> n >> m;
    map<int , map<int , int> >mppx, mppy;
    for(int i =0; i<n ;i++)
    {
        for(int j = 0; j<m ; j++)
        {
            int x; cin >> x;
            mppx[x][i]++;
            mppy[x][j]++;
        }
    }
    ll cr_h = 0;
    for(auto i: mppx)
        cr_h += alabu(i.second);
    for(auto i: mppy)
        cr_h += alabu(i.second);
    cout << cr_h << endl;
}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
