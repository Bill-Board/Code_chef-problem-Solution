//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

bool is_pali(string s, int cnt){
    map<char,int> mpp;
    for(auto i: s)
        mpp[i]++;
    int kot  = 0;
    for(auto i: mpp)
        if(i.second&1)
            kot++;
    return kot<=cnt;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string a, b;
    for(int i = 0;i<n; i++){
        if(i&1)
            b+=s[i];
        else
            a+=s[i];
    }
    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end());
    if(n%2==0){
        string ans="";
        for(int i = 0; i<n; i++){
            if(i&1){
                ans+=b.back();
                b.pop_back();
            }
            else{
                ans+=a.back();
                a.pop_back();
            }
        }
        for(int i = 0; i<n; i++)
        if(ans[i] != ans[n- i -1]){
            cout << "NO\n";
            return;
        }
        cout << "YES\n";return;
    }
    if(is_pali(a,1) and is_pali(b,0))
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
