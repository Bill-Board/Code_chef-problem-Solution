//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int n, m, k;
int alabu(){
    for(int i = 2; i<=n ; i++){
        int ek = (i * (i-1))/2, dui = n - i;
        if(ek + dui <=m)
            k = i;
        if(ek+dui >= m)
            return i;
    }
}
void solve()
{
    cin >> n >> m;
    vector<int> a(m), p;
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());
    int ans = alabu(), cr_h = 0;
//    cout << ans  << " || " << k << endl;
    for(int i = 0; i< n -ans; i++)
        p.push_back( a.back() ),a.pop_back();

    int baki =m -  ( ( k - 1 ) * k )/2 - (n-ans) ;
    //cout << baki << endl;

    for(int i = a.size()-1, j = 1; i >=0 and j <= baki; i--, j++){
        if(j == baki)
            p.push_back(a[i]);
        a.pop_back();
    }
//    for(auto i: a)
//        cout << i << " ";cout << endl;
//    for(auto i: p)
//        cout << i << " ";cout << endl;

    reverse(a.begin(),a.end());

//    for(auto i: a)
//        cout << i << " ";cout << endl;
    k --;
    //cout << "k " << k << endl;
    for(int i = k-1; i < a.size() and p.size() < n - 1;k--, i+=k){
        p.push_back(a[i]);
        //cout << i <<" | ";
    }
    cout << accumulate(p.begin(),p.end(), 0) << "\n";
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(nullptr);
    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
