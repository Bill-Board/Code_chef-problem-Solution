//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
int x, y;
bool ok(int a, int b, int c){
    if((a^b)!=x)return false;
    if((b^c)!=y)return false;
    if(a==b or b==c or a==c)return false;
    if(a==1 or (a!=2 and a%2==0))
        return false;
    if(b==1 or (b!=2 and b%2==0))
        return false;
    if(c==1 or (c!=2 and c%2==0))
        return false;

    return true;
}
void solve()
{
    cin >> x >> y;
    /// a = 2;
    int a = 2, b =(x^a), c = (y^b);
    if(ok(a,b,c)){
        if(a>c)swap(a,c);
        if(b>c)swap(b,c);
        if(a>b)swap(a,b);
        cout << a << " " << b << " " << c << '\n';
        //return;
    }

    /// b = 2;
    b=2, a = ( x ^ b ), c = (y ^ b);
    if(ok(a,b,c)){
        if(a>c)swap(a,c);
        if(b>c)swap(b,c);
        if(a>b)swap(a,b);
        cout << a << " " << b << " " << c << '\n';
        //return;
    }

    /// c = 2;
    c = 2, b =(y^c), a = (x^b);
    if(ok(a,b,c)){
        if(a>c)swap(a,c);
        if(b>c)swap(b,c);
        if(a>b)swap(a,b);
        cout << a << " " << b << " " << c << '\n';
        //return;
    }

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
