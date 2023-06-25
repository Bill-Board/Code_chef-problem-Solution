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
    vector<int> a(2*n);
    map<int, int> mpp;
    for(auto &i: a)
        cin >> i, mpp[i]++;
    int kot = 0;
    for(auto i: mpp)
        kot = max(kot, i.second);
    int baki = 2*n - kot;
    kot -= baki;
    kot/=2;
    if(baki+1>=kot)
        cout << "YES\n";
    else
        cout << "NO\n";
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
