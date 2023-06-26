//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector<pair<int, int> > vp;
vector<int> a;


int n;
bool alabu(int pos ){
    int sum = 0, last = 0;
    for(int i = 0; i<n; i++){
        if((sum+a[i])&(1<<pos))
            sum+=a[i];
        else{
            i--;
            sum = 0;
            if(last>i)
                return false;
            vp.push_back({last, i});
            last = i+1;
        }
        cout << sum << endl;
    }
    //if(last>n-1)return false;
    vp.push_back({last, n-1});
    return true;
}

void solve()
{
    cin >> n;
    a.resize(n);
    for(auto &i: a)
        cin >> i;
//    for(int i = 0; i<31; i++){
//        vp.clear();
//        if(alabu(i) and vp.size()>1){
//            cout << "i  ||  "<<i << '\n';
//            cout << "YES\n";
//            cout << vp.size() << '\n';
//            for(auto i: vp)
//                cout << i.first << " " << i.second << '\n';
//            return;
//        }
//    }

    reverse(a.begin(),a.end());

    for(int i = 0; i<31; i++){
        vp.clear();
        if(alabu(i)){
            cout << "i  ||  "<<i << '\n';
            cout << "YES\n";
            cout << vp.size() << '\n';
            for(auto i: vp)
                cout << i.first +1<< " " << i.second +1<< '\n';
            return;
        }cout << endl << endl;
    }
    cout << "NO\n";
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
