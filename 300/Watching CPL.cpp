 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

typedef long long v99;
typedef unsigned long long ull;
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<v99, v99>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(v99 i=a; i<b; i++)
#define rep1(i,a,b) for(v99 i=a; i<=b; i++)
#define rep0in(i,a,b) for(v99 i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(v99 i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
#define vc    vector<char>
#define vll    vector<v99>
#define vs    vector<string>
#define dqll   deque<v99>
#define dqc   deque<char>
#define lll   list<v99>
#define lic   list<char>

//Container Adaptors : queue,priority_queue, stack....
#define stll   stack<v99>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define sll    set<v99>
#define sc    set<char>
#define msll   multiset<v99>
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
using namespace std;
using namespace __gnu_pbds;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pii &a,const pii &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


typedef tree< v99, null_type, less<v99>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k) – kth index a ki ache, pointer return korbe.
/// order_of_key(x) – x kon position a ache , oita bole dibe


/**bool prime[10000020];vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
	for(v99 i=4;i<=n;i+=2)prime[i]=true;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	rep1(i,2,n)if(!prime[i])prm.push_back(i);

}*/
bool isPowerOfTwo (v99 x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

template <typename T> inline
void print(vector <T> v) {
    for (T i : v) cout << i << whp;
    cout << ses;
}

template <typename T> inline
void print(T&& t) {cout << t << ses;}


template <typename T> inline
void print(T *a, T n) {
    for(T i=0;i<n;i++)print(a[i]);
    cout<<ses;
}
template <typename T,typename Q> inline
void print(map < T, Q> v) {
    for (auto i : v) cout << i.first << whp<< i.second<<ses;
    cout << ses;
}

template <typename T>
void print(vector <vector <T>>& v) {
    for (vector <T>& vv : v) {
        for (T& i : vv)
            cout << i << whp;
        cout << ses;
    }
}
template <typename T>
inline void read(T&& t) {cin >> t;}

template <typename T> inline
void read(vector <T>& v) {for (T& i : v) cin >> i;}

template <typename T> inline
void read(T *arr,T n) {for (T i=0;i<n;i++) read(arr[i]);}

template <typename T> inline
void read(T *arr,T s, T n) {for (T i=s;i<=n;i++) read(arr[i]);}

template <typename T, typename... Args> inline
void read(T&& t, Args&&... args)
{
    cin >> t;
    read(forward<Args>(args)...);
}
template <typename T, typename... Args>
inline void print(T&& t, Args&&... args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}
template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0)
    {
        v99 val=bigmod(n,p/2,m);
        return (T)((val*val)%m);
    }
    else return (T)(((v99)n*(v99)bigmod(n,p-1,m))%m);
}
///-------------------------------------------------------------------------------------------------------
v99 hoise(vll tracy,vll mike,v99 t,v99 m,v99 k)
{
    if( tracy.size()<2 and mike.size()<2)return -1LL;
    if(t<k and m<k)return -1LL;
    v99 kotbesi=(t-k)+(m-k);
    v99 koita=tracy.size()+mike.size();
    while(tracy.size()>1 or mike.size()>1)
    {
        v99 ekta=0,duita=0;
        if(tracy.size()>1)ekta=tracy.back();
        if(mike.size()>1)duita=mike.back();
        if(ekta<duita and ekta<=kotbesi)kotbesi-=ekta,koita--,tracy.pop_back();
        else if(ekta>duita and duita<=kotbesi)kotbesi-=duita,koita--,mike.pop_back();
        else break;
    }
    return koita;
}





v99 ek(vll a ,v99 k)
{
    v99 tmp=k,koita=0;
    v99 visi[a.size()+2]={};
    for(v99 i=0;i<a.size();i++)
    {
        if(a[i]<k)k-=a[i],visi[i]=1,koita++;
        else
        {
            while(k<=a[i] and i<a.size())i++;
            visi[i-1]=1;
            k-=a[i-1];
            koita++;
            break;
        }
    }
    if(k>0)return -1LL;
    for(v99 i=0;i<a.size();i++)
        {
            if(visi[i])continue;
            tmp-=a[i];
            koita++;
            if(tmp<1)return koita;
        }
    return -1LL;
}

v99 ekpro(vll a ,v99 k)
{
    vector<v99>tracy,mike;
    v99 tmp=k,kk=k,koita=0,t=0,m=0;
    v99 visi[a.size()+2]={};
    for(v99 i=0;i<a.size();i++)
    {
        if(a[i]<k)k-=a[i],visi[i]=1,koita++,t+=a[i],tracy.pb(a[i]);
        else
        {
            while(k<=a[i] and i<a.size())i++;
            visi[i-1]=1;
            tracy.pb(a[i-1]);
            t+=a[i-1];
            k-=a[i-1];
            koita++;
            break;
        }
    }
    for(v99 i=0;i<a.size();i++)
        {
            if(visi[i])continue;
            mike.pb(a[i]);
            m+=a[i];
            tmp-=a[i];
            koita++;
            if(tmp<1)break;
        }
        //print(tracy);print(mike);
    return hoise(tracy,mike,t,m,kk);
}



v99 tin(vll a,v99 k)
{
    v99 jn=k,jk=k,koita=0;
    for(auto i:a)
    {
        v99 dif1=(jn+1)/2LL;
        v99 dif2=(jk+1)/2LL;
        if(dif1>dif2)jn-=i,jn=max(jn,0LL);
        else jk-=i,jk=max(jk,0LL);
        koita++;
        if(jn<1 and jk<1)break;
    }
    if(jn>0 or jk>0)koita=-1LL;
    return koita;
}




void solve()
{
    /// code is here->
    v99 n,k,sum=0;read(n,k);
    vll a(n);
    for(auto &i:a)cin>>i,sum+=i;
    if(sum<2*k or n==1){print(-1);return;}
    sort(sob(a),greater<>());
    vll ans;
    if(n<=100)ans.pb(ek(a,k)),ans.pb(tin(a,k));
    else ans.pb(ek(a,k)),ans.pb(ekpro(a,k));
    sort(sob(ans));
    for(auto i:ans)if(1<i and i<=n){print(i);return;}
    print(-1);
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...

