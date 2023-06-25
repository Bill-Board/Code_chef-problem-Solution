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
    int n ;
    string s;
    cin >> n >> s;
    int one = 0;
    for(auto i: s)
        one += i=='1';
    int zero = n- one;
    if( n&1){
        cout << "NO" << endl;
        return;
    }
    if(one == zero){
        cout << "YES\n1 " << n << endl;
        return;
    }
    char c = '1'; /// eta kom ache
    if(one < zero) c = '0';
    int kot = abs(zero - one) /2, k =0;
    for(int i =0 ;i<n ; i++){
        if(s[i] == c) k++;
        else k--;
        if(k == kot){
            cout << "YES\n1 " << i+1 << endl;
            return;
        }
    }
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
