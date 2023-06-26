//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool ispoweroftwo(int x)
{
    return x and !(x&(x-1));
}

void solve()
{
    int n, last = (1<<18); cin >> n;
    vector<int> a(n);
    for(int i =1; i<=n; i++)
        a[i - 1] = i;
    if(n % 2== 0){
        a[n-2]= last + 1;
        a[n-1] = last + 2;
    }
    int k = n;
    while(!ispoweroftwo(k))
        k += k & -k;
    vector<int> b;
    for(int i = k + 1; i <=n+k ; i++)
        b.push_back(i);
    if(n % 2== 0){
        b[n-2]= last + 5;
        b[n-1] = last + 6;
    }
    for(auto i: a)
        cout << i << " ";
    cout << endl;
    for(auto i: b)
        cout << i << " ";
    cout << endl;
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
