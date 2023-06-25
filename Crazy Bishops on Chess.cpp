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
    if( n < 3)
        cout << 0 << '\n';
    else if(n == 3)
        cout << 2 << '\n';
    else if((n-1)%2 == 0){
        ll kot = (n - 3)/2;
        kot = (kot * 3) + 1;
        cout << kot << '\n';
    }
    else{
        ll kot = (n - 2)/2;
        kot = (kot * 3);
        cout << kot << '\n';
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
