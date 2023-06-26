//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    cout << n << '\n';
    int a[n+1][n+1] = {};
    for(int i =1; i <= n; i++)
        for(int j = 1; j<=n; j++)
            if(i == j)
                a[i][j] = 1;
    for(int i =1; i <= n; i++)
        for(int j = 1, val = 2; j<=n; j++){
            if(i==j)continue;
            a[i][j] = val++;
        }
    for(int i =1; i <= n; i++)
        for(int j = 1; j<=n; j++)
            cout << a[i][j] << " \n"[j==n];
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
