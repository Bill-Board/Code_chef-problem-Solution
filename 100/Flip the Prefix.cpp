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
    int n, k; string s;
    cin >> n >> k >> s;
    vector<int> pre1(n+3, 0), pre0(n+3, 0);
    for(int i = 0, cnt1 = 1, cnt0 = 1; i<n; ){
        bool ok = false;
        while(i<n and s[i]=='1')
            i++, pre1[i] = cnt1, ok =true;
        if(ok)cnt1++;
        while(i<n and s[i]=='0')
            i++, pre0[i] = cnt0;
        cnt0++;
    }
    for(int i = 1; i<=n; i++){
        if(pre1[i] == 0) pre1[i] = pre1[i-1];
        if(pre0[i] == 0) pre0[i] = pre0[i-1];
    }


//    for(int i = 1; i<=n; i++)
//        cout << pre0[i] << " \n"[i==n];
//    for(int i = 1; i<=n; i++)
//        cout << pre1[i] << " \n"[i==n];

    int cr_h = INT_MAX;

    for(int i = 1; i<=n-k+1 ; i++){
        int val0 = pre0[i + k -1]- pre0[i-1];
        int val1 = pre1[i + k -1]- pre1[i-1];
        if(s[i + k -2]=='1')
            cr_h = min(cr_h, max(0,val0 + val1 - 1));
        else
            cr_h = min(cr_h, val0 + val1);
    }
    cout << cr_h << '\n';
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
