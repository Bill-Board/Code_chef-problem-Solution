//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool alabu(vector<int> a, int n, int f){
    vector<int> ans(n,0);
    ans[0]=f;
    for(int i = 1; i<n; i++){
        if(a[i-1] == 1){
            if(ans[i-1]==2)
                ans[i]=3;
            else
                ans[i]=2;
        }
        else
            ans[i]=ans[i-1];
    }
    return (ans.front()+ans.back())%2 == a.back();
}

void solve()
{
    int n; cin>> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    if(alabu(a,n,2) or alabu(a,n,3))
        cout << "YES\n";
    else
        cout << "NO\n";
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
