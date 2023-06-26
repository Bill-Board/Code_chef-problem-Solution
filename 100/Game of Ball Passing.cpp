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
    ll n, sum = 0;
    cin >> n;
    vector <int > a(n);
    for(auto &i: a)
        cin >> i,
        sum +=i;
    sort(a.begin(),a.end());
    if(sum == 0)
    {
        cout << 0 << endl;
        return;
    }
    //cout <<  (sum -a.back()+1)<< endl;
    cout << 1 + max(0ll, a.back() - (sum -a.back()+1) ) << endl;


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
