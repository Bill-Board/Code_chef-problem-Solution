//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200005;
set <int> graph[N];
int a[N], mex[N], cnt[N];
multiset <int> s;

void dfs(int ind, int par){

    cnt [a[ind]]++;
    if(s.find(a[ind]) != s.end())
            s.erase(s.find(a[ind]));
    mex[ind]= *s.begin();
    for(auto i: graph[ind]){
        if(i == par)continue;
        dfs(i, ind);
    }
    cnt [ a[ind] ]--;
    if(cnt[ a[ind] ] == 0)
        s.insert(a[ind]);
}


void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n ;i++)
        cin >> a[i];
    s.clear();
    for(int i = 0; i<=n+15; i++)
        s.insert(i), graph[i].clear(), cnt[i] = mex[ i ] = 0;

    for( int i =0; i< n-1 ; i++){
        int x, y;
        cin >> x >> y;
        graph[x].insert(y);
        graph[y].insert(x);
    }
    dfs(1,0);
    int cr_h = 0;
    for(int i =1; i<=n ;i++)
            cr_h = max(cr_h, mex[i]);
    cout << cr_h << endl;

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
