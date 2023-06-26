//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

pair<ll,ll> alabu(priority_queue<int> even,priority_queue<int> odd, int a, int b){
    ll alice = 0, bob = 0, ok = 0;
    while(ok < 2){
        if(a == 0){ /// even
            if(!even.empty()){
                alice += even.top(),
                even.pop() , a= 1;
            }
            else ok ++;
        }
        else{
            if(!odd.empty())
                alice += odd.top(),
                odd.pop(), a=0;
            else ok++;
        }
        if(b == 0){ /// even
            if(!even.empty())
                bob += even.top(),
                even.pop(), b = 1;
            else ok++;
        }
        else{
            if(!odd.empty())
                bob+=odd.top(),
                odd.pop(), b=0;
            else
                ok++;
        }
    }
    return {alice,bob};
}

ll answer(pair <ll,ll> a, pair<ll,ll> b)
{
    if(a.second == b.second)
        return max(a.first, b.first);
    if(a.second > b.second)
        return a.first;
    else return b.first;
}

void solve()
{
    int n;cin >> n;
    priority_queue<int> p, q;
    for(int i = 0; i<n ; i++){
        int x; cin >> x;
        if(x&1)q.push(x);
        else p.push(x);
    }
    pair<ll,ll > ans1= alabu(p,q,0,0);
    pair<ll,ll > ans2= alabu(p,q,0,1);
    pair<ll,ll > ans3= alabu(p,q,1,0);
    pair<ll,ll > ans4= alabu(p,q,1,1);

//    cout << ans1.first << " " << ans1.second << endl;
//    cout << ans2.first << " " << ans2.second << endl;
//    cout << ans3.first << " " << ans3.second << endl;
//    cout << ans4.first << " " << ans4.second << endl;

    cout << max(answer(ans1, ans2), answer(ans3,ans4)) << endl;
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
