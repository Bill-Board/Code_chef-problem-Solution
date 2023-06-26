//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10000001;



void solve()
{
    ll n , sum = 0;
    cin >> n;
    vector< ll > a(n);
    for(ll i = 0; i<n ;i++)
    {
        cin >> a[i];
        sum +=a[i];
    }
    ll mot = (n*(n+1))/2ll;
    if( sum < mot)
    {
        cout << "NO" <<endl;
        return;
    }
    sum = sum - mot;
    //cout << sum << endl;
    vector < ll > p;
    for(ll i =1; i*i<=sum ; i++)
    {
        if(sum % i == 0)
        {
            p.push_back(i);
            if(i != sum/i)
                p.push_back(sum/i);
        }
    }
    if(sum==0)p.push_back(n+1);
    for(auto i: p)
    {
        set <ll > q;
        for(auto j: a)
        {
            if( 0<(j%i) and (j%i)<=n)
                q.insert(j%i);
        }
        if(q.size()==n)
        {
            cout << "YES " << i << endl;
            return;
        }
    }
    cout << "NO" <<endl;
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
