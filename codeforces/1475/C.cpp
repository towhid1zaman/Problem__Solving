#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll A, B, k; cin >> A >> B >> k;
    std::vector<ll>a(k), b(k);
    std::map<ll,int> cnta, cntb;
    for(int i = 0; i<k; i++){
        cin >> a[i]; cnta[ a[i] ]++;
    }
    for(int i = 0; i<k; i++){
       cin >> b[i]; cntb[ b[i] ]++;
    }

    ll ans = 0;
    for(int i = 1;i<=k; i++){
        cnta[ a[i-1] ]--, cntb[ b[i-1] ]--;
        ll now = k - i;
        now = now - cnta[ a[i-1] ] - cntb[ b[i-1] ];
        ans += now;
    }
    cout << ans << endl;
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