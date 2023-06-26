//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> mpp;
    for(auto i: s)
        mpp[i]++;
    int cnt = 0;
    for(auto i: mpp)
        cnt += (i.second%2);
    if(1 < cnt or (n % 2 == 0 and cnt )){
        cout << 0 << '\n';
        return;
    }
    if(n % 2 == 0){
        cout << 1 << '\n';
        return;
    }
    if(mpp.size() == 1)
        cout << 2 << '\n';
    else
        cout << 1 << '\n';
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
