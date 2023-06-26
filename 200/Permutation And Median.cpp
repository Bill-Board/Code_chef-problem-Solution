//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n; cin>> n;
    deque<int> dq;
    for(int i = 1; i<=n ; i++)
        dq.push_back(i);
    bool ok = true;
    while(dq.size()){
        if(ok){
            cout << dq.back() << " ";
            dq.pop_back();
        }
        else{
            cout << dq.front() << " ";
            dq.pop_front();
        }
        ok ^= 1;
    }
    cout << '\n';
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
