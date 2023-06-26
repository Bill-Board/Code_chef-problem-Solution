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

void solve(int tc){
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;

    ll sum1 = 0, sum2 = 0;
    for(auto i: a){
        if(i % b[0] == 0)
            sum1 += i;
        else
            sum2 += i;
    }
    ll kot = min(sum1, sum2);
    if(m == 1)
        cout << kot << '\n';
    else if(m > 2)
        cout << 0 << '\n';
    else{
        ll ek = 0, dui = 0;
        for(auto i: a){
            if(i % b[0]==0)continue;
            if(i % b[1] == 0)
                ek+= i;
            else
                dui+=i;
        }

        ll ek1 = 0, dui1 = 0;
        for(auto i: a){
            if(i % b[0]!=0)continue;
            if(i % b[1] == 0)
                ek1+= i;
            else
                dui1+=i;
        }
        cout << min(max(ek1, dui1),max(ek,dui)) << '\n';
    }
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
