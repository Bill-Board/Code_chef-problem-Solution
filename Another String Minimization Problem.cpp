//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n, m; cin >> n >> m;
    string s(m+1, 'B');
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if(x <= m+1-x){
            if(s[x]=='B')s[x]='A';
            else s[m+1-x]='A';
        }
        else{
            if(s[m+1-x]=='B')s[m+1-x]='A';
            else s[x]='A';
        }
    }
    for(int i =1; i<=m; i++)
        cout << s[i];
    cout <<'\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
