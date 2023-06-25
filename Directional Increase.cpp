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
    int n;cin>> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    while(a.size()>0 and a.back()==0)
        a.pop_back();
    if(a.empty()){
        cout << "Yes\n";
        return;
    }
    n=a.size();
    int last = 0;
    for(int i = n-1; i>0 ;i--){
        last-=a[i];
        //cout << last << " ";
        if(last<=0){
            cout << "No\n";
            return;
        }
    }cout << '\n';
    //cout << a.front()<<endl;
    if(last==a.front())
        cout << "Yes\n";
    else
        cout <<"No\n";
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
