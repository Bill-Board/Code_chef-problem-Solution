//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

int fx[3]= {1, 0, -1};
int fy[3]= {0, 1, 0 };

vector<ll>visi[6], a[6], suf[6];
int n;
ll ans ;

void dfs(int indx, int indy, int rig, ll sum){
    visi[indx][indy] = 1;
    if(indx%2 != indy%2){
//        cout << "ind x y " << indx << " " << indy << '\n';
//        cout << "Sum "  << sum << "\n\n\n";
        int x1 = indx, y1= indy+1;
        int x2 = indx == 1? 2 : 1 ,y2 = y1;
        ll kot1 = max(suf[x2][y2],suf[x1][y1]) + 2*(n - indy);
        ans = min(kot1+sum, ans);
    }
    for(int i = 0; i<3; i++){
        int x = indx + fx[i], y = indy + fy[i];
        if(0<x and x<=2 and 0<y and y<=n and !visi[x][y] and rig!=i)
        {
            dfs(x, y, i, max(sum+1, a[x][y]+1));
        }
    }
}

void solve(int tc)
{
    cin >> n;
    for(int i =0; i<5; i++){
        a[i].clear();visi[i].clear();suf[i].clear();
        a[i].resize(n+4, 0); visi[i].resize(n+4, 0); suf[i].resize(n+4, 0);
    }
    for(int i = 1; i<=2; i++){
        for(int j =1; j<=n; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i<=2; i++){
        for(int j = n; j>0; j--)
            suf[i][j] = max(suf[i][j+1], a[i][j]);
    }
    ans = 0;
    for(int i = 2; i<=n; i++)
        ans = max(ans+1, a[1][i]+1);
    for(int i = n; i>0; i--)
        ans = max(ans+1, a[2][i]+1);
    //cout << ans << '\n';
    dfs(1, 1, 1, 0);
    cout << ans << '\n';
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
