//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int n, k;
bool alabu(int p, string s){
    int i , kk = k-1, one = 0;
    while(s.size() and kk>0){
        one += s.back()=='1';
        s.pop_back();
        if(one % 2 == p){
            one = 0;
            kk --;
        }
    }
    if(kk==0 and s.size()){
        one = 0;
        for(auto i: s)
            one += i == '1';
        return one % 2 ==p;
    }
    else return false;
}

void solve()
{
    string s;
    cin >> n >> k >> s;
    if(alabu(1, s) or alabu(0, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
