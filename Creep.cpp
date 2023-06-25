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
    int a, b;
    cin>> a >> b;
    string s(a+b, '*');
    if(a<b){
        for(int i = 0; i<2*a;i+=2)
            s[i]='0';
        for(int i = 0; i<a+b;i++)
            if(s[i]=='*')
                s[i]='1';
    }
    else{
        for(int i = 0; i<2*b;i+=2)
            s[i]='1';
        for(int i = 0; i<a+b;i++)
            if(s[i]=='*')
                s[i]='0';
    }
    cout << s << '\n';
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
