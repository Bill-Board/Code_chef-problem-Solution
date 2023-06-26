//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

bool is_vowal(char c){
    if(c == 'a' or c=='e' or c == 'i' or c=='o' or c=='u')
        return true;
    return false;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> suf(n+2,0);
    int cnt = 0;
    for(int i = n-1; ~i; i--){
        suf[i] = cnt;
        cnt += is_vowal(s[i]);
    }
//    for(int i= 0; i<n; i++)
//        cout << suf[i] << " \n"[i==n-1];
    string ans;
    for(int i = n-1; ~i; i--)
        if(suf[i]&1)ans+=s[i];
    for(int i= 0; i<n; i++)
        if(suf[i]%2==0)ans+=s[i];
    cout << ans << '\n';

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
