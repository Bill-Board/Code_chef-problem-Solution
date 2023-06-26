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
    ll n;
    string s;
    cin>> n >> s;
    ll tot = (n*(n+1))/2;
    vector<pair<int, int>>a;
    vector<int>b;
    ll one = 0;
    for(int i =0;i<n; ){
        int z=0,o=0;
        while(s[i]=='1' and i<n)
            i++,o++;
        ll k=  (o*(o-1))/2;
        one += k;
        while(s[i]=='0' and i<n)
            z++,i++;
        a.push_back({z,i-z});
    }
//    for(auto i: a)
//        cout << i.first << " "<< i.second<<endl;
    ll cr_h = 0;
    for(auto i: a){
        ll kot = (i.first *(i.first+1))/2;
        kot-=i.first;
        cr_h+= (kot + (kot*i.second));
    }
    cout << tot-(cr_h+one) << '\n';

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
