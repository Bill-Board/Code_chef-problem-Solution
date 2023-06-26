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
using namespace std;
using namespace __gnu_pbds;

typedef long long v99;
typedef unsigned long long ull;
typedef long double dll;
typedef complex<double> point;
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
#define yes cout<<"YES"<<ses;
#define no cout<<"NO"<<ses;
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
v99 modpow(v99 a, v99 n, v99 mod) {
  v99 r = 1;
  while (n > 0) {
    if (n & 1) r = r * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return r;
}

v99 L[mxi];
v99 P[mxi][22];
v99 T[mxi];
vector<v99> g[mxi];
void dfs(v99 from,v99 u,v99 dep)
{
    T[u]=from;
    L[u]=dep;
    for(v99 i=0;i<(v99)g[u].size();i++)
    {
        v99 v=g[u][i];
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}

pii lca_query(v99 p, v99 q) //N=নোড সংখ্যা
  {
      v99 tmp, log, i;
      bool hoise=false;
      if (L[p] < L[q])
      {
          hoise=true;
          swap(p,q);
      }//print(L[p],L[q],p,q);
      log=1;
      while(1) {
        v99 next=log+1;
        if((1<<next)>L[p])break;
        log++;
      }
      v99 ans1=L[p];
      for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
              p = P[p][i];
      ans1-=L[p];
      if (p == q)
      {
          if(hoise)return pii(0LL,ans1);
          return pii(ans1,0LL);
      }
      v99 ans2=L[p];
        for (i = log; i >= 0; i--)
          if (P[p][i] != -1 && P[p][i] != P[q][i])
              p = P[p][i], q = P[q][i];
      ans2-=L[p];
      ans1+=ans2;
      if(hoise)swap(ans1,ans2);
      return pii(ans1+1,ans2+1);
  }

void lca_init(v99 N)
  {
      memset (P,-1,sizeof(P));
      v99 i, j;
       for (i = 0; i < N; i++)
          P[i][0] = T[i];

      for (j = 1; 1 << j < N; j++)
         for (i = 0; i < N; i++)
             if (P[i][j - 1] != -1)
                 P[i][j] = P[P[i][j - 1]][j - 1];
 }
///-------------------------------------------------------------------------------------------------------

void solve()
{
    /// code is here->
    v99 n,q;read(n,q);
    for(v99 i=1;i<n;i++)
    {
        v99 u,v;read(u,v);
        --u,--v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(-1LL,0LL,0LL);
    lca_init(n);
    while(q--)
    {
        v99 root,l,r;read(root,l,r);
        --r;--l;--root;
        pii ek=lca_query(l,r);
        pii dui=lca_query(l,root);
        pii tin=lca_query(r,root);
        //print(ek.ff,ek.ss);print(dui.ff,dui.ss);print(tin.ff,tin.ss);
        v99 sum=ek.ff+ek.ss;
        if(ek.ff==dui.ff)
        {
            v99 ans=min(ek.ss,tin.ff);
            print(sum-ans,ans);
        }
        else
        {
            v99 ans=min(ek.ff,dui.ff);
            print(ans,sum-ans);
        }
    }
}



signed main()
{
    dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...
