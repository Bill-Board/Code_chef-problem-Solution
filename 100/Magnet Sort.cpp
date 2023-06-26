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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++)
        cin >> a[i], b[i] = a[i];
    string s;
    cin >> s;
    if(is_sorted(a.begin(), a.end()))
    {
        cout << 0 << endl;
        return ;
    }
    int south=0;
    for(auto i: s)south += ( i == 'S');
    if(south ==0 or south==n)
    {
        cout << -1 << endl;
        return ;
    }
    if(s[0]!=s[n-1])
    {
        cout << 1 << endl;
        return ;
    }
    int last = n-1;
    while(s[0]==s[last])last--;
    //cout << last << endl;
    sort(b.begin(), b.begin()+last+1);
    //for(auto i: b)cout << i << " ";cout <<endl;

    if(is_sorted(b.begin() , b.end()))
    {
        cout << 1 << endl;
        return ;
    }
    last = 0;
    while(s.back()==s[last])last++;
    sort(a.begin()+last, a.end());
    //for(auto i: a)cout << i << " ";cout <<endl;
    if(is_sorted(a.begin() , a.end()))
    {
        cout << 1 << endl;
        return ;
    }
    cout << 2 << endl;
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
