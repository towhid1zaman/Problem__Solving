#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        mp[a]++;
    }

    set<int>s;
    for(auto x:mp){
        s.insert(x.second);
    }
    bool f = s.size()==1 and mp.size()==2;
    if(!f){
        cout <<"NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(auto x:mp){
        cout << x.first << ' ';
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}