//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

int alabu(vector<int> a, int pos){
    for(int i = a.size()-1; ~i; i--)
        if(a[i]==a[pos]) return i;
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    set<int> s;
    for(auto &i: a)
        cin >> i, s.insert(i);
    if(s.size() < 3){
        cout << "YES\n";
        return;
    }
    int kot = alabu(a, 0);
    s.clear();s.insert(a[0]);
    for(int i = kot; i<n; i++)
        s.insert(a[i]);
    if(s.size()<3){
        cout << "YES\n";
        return;
    }

    s.clear();

    int pos = -1;
    for(int i = 0; i<n-1; i++)
        if(a[i] != a[i+1]){
            pos = i+1;
            break;
        }
    kot = alabu(a, pos);
    s.insert(a[0]);
    for(int i = kot; i<n; i++)
        s.insert(a[i]);
    if(s.size()<3){
        cout << "YES\n";
        return;
    }
    for(int i = 0; i<n-1; i++)
        if(a[i]==a[0] and a[i+1] == a[n-1]){
            cout << "YES\n";
            return;
        }
    cout << "NO\n";


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
