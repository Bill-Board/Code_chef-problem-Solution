//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=100004;


/// code is here->----------------------------
vll p;
void init()
{
    for(v99 i=1;i<=N;i++)
        p.push_back((i*(i+1))/2LL );
    //for(auto i:p)cout << i <<whp; cout<<ses;
}

void solve()
{
    v99 n,k;
    cin>> n >> k;
    if(n==1 and k==1)
    {
        cout << 1 <<ses;
        return;
    }
    v99 pos=(upper_bound(sob(p),k)-p.begin()),baki_val ;
    for ( v99 i= pos ;i>=0 ;i--)
    {
        v99 val1=k - p[i], val2 = n - (i + 1 );
        //cout << val1 << whp << val2 <<ses;
        if(val1>=val2)
        {
            pos=i+1;
            baki_val=val1;
            break;
        }
    }
    //cout << pos << whp << baki_val <<ses;

    vll ans;
    for( v99 i=1; i<=pos ;i++)ans.push_back(i);
    v99 khali_n=n-(pos);
    v99 kot=baki_val-khali_n+1;
    v99 ok=pos-kot+1;
    while(ans.size()<n)ans.push_back(ok);

    for( auto i: ans)cout << i << whp; cout << ses;

}



signed main()
{
    init();
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...
