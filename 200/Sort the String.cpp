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
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0;i<n;){
        int k = 0;
        while(s[i]=='1' and i<n)i++, k++;
        if(k)cnt++;
        while(s[i]=='0' and i<n)i++;
    }
    if(s.back()=='1' and cnt)cnt--;
    cout << cnt << '\n';
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
