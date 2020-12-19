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
    std::vector<int>a(n+1);
    std::map<int, int> mp;
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        mp[a[i]] = 1;
    }
    bool f = 0;
    ll ans=  0;
    for(int i = 1; i<=n; i++){
        if(mp[2048])f = 1;
        if(a[i]<2048)ans+=a[i];
    }
    cout << (f or ans>=2048 ? "YES" : "NO")<<endl;


    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}