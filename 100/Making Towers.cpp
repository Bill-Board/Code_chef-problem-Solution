//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

int alabu(vector<int> v){
    if(v.empty())return 0;
    pair<int, int> a ={1,v.front()}, b=a;
    /// first = val, second = pos;
    for(auto i: v){
        if((i - a.second)&1)
            a.first ++, a.second = i;
        if((i - b.second)&1)
            b.first ++, b.second = i;
    }
    return max(a.first,b.first);
}

void solve()
{
    int n; cin >> n;
    vector<int> a(n), tom[n+1];
    for(int i = 0; i<n; i++){
        cin >> a[i];
        tom[a[i]].push_back(i+1);
    }
    for(int i = 1; i<=n; i++)
        cout << alabu(tom[i]) << " \n"[i==n];
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
