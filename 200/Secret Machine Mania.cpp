//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100005;

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
ll last = 1ll << 60;
ll pw(ll a, ll b)
{
	ll ans = 1;
	for(ll i = 1; i <= b; ++i){
        ans = (ans * a);
	}
	return ans;
}

bool prime[100020];vector<ll>prm;
void SieveOfEratosthenes(ll n)
{
	for (ll p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			for (ll i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	prm.push_back(2ll);
	for( ll i=3; i <= n; i+= 2)
        if(!prime[i])prm.push_back(i);

}
map<ll, ll> prmfactor(ll n){
    map <ll, ll > mpp;
    for(auto i: prm){
        ll cnt = 0;
        while(n % i ==0){
            cnt ++;
            n /= i;
        }
        if(cnt)mpp[i]=cnt;
        if(n==1)break;
    }
    if(n > 1)mpp[n]++;
    return mpp;
}



void solve()
{
    ll x, c;
    cin >> x >> c;
    ll cr_h = 1;
    if(c==1){
        cout << 1 << endl;
        return;
    }
    map<ll,ll>a= prmfactor(x);
    for(auto &i: a){
        i.second %= c;
        i.second = min(i.second, c - i.second);
    }

    for(auto i: a)
        cr_h *= pw(i.first, i.second);

    cout << cr_h << endl;
}



signed main()
{
    SieveOfEratosthenes(N);
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
