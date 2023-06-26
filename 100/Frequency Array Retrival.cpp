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
    int n; cin >> n;
    vector<int> a(n), ans(n);
    map<int, int> frq, p;
    for(auto &i: a)
        cin >> i, frq[i]++;
    for(auto i: frq)
        if(i.second % i.first != 0){
            cout << -1 << '\n';
            return;
        }
    frq.clear();
    for(int i = 0, k = 1; i<n; i++){
        if(p[a[i]] == 0)
            p[a[i]] = k++;
        cout << p[a[i]] << " ";
        frq[a[i]]++;
        if(frq[a[i]] % a[i] == 0)
                p[a[i]]=0;
    }
    cout << '\n';



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
