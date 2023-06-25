//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector< pair<int , int> > a;
int n;
bool alabu(int start, int endd)
{
    //cout << start <<" startend "<< endd << endl;
    for(int i = start; i<endd; i++){
        for(int j = start; j<endd; j++){
            for(int k = start; k < endd; k++){
                for(int l =start; l<endd; l++)
                {
                    set<int> s;
                    s.insert(i);
                    s.insert(j);
                    s.insert(k);
                    s.insert(l);
                    if(s.size()!=4)continue;
                    if(__builtin_popcount((a[i].first^a[j].first))== __builtin_popcount((a[k].first^a[l].first)) )
                    {
                        cout << a[i].second+1 << " "<< a[j].second+1 << " "<< a[k].second+1 << " "<< a[l].second+1 << endl;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


void solve()
{
    cin >> n;
    a.clear(); a.resize(n);
    for(int i =0; i<n ;i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    if(alabu(0,min(n, 30)))return;
    if(alabu(max(0, n-30), n))return;
    int mid= n/2;
    if(alabu(max(0, mid-15), min(n, mid+15)))return;
    cout << -1 << endl;
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
