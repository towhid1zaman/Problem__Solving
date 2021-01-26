#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll pos(ll n){
    return n*(n-1)/2;
}
void task(){
    ll a, b, k; cin >> a >> b >> k;
    std::map<ll, ll> cnta, cntb;
    for(int i = 0; i<k; i++){
        ll x; cin >> x;
        cnta[x]++;
    }

    for(int i = 0; i<k; i++){
        ll x; cin >> x;
        cntb[x]++;
    }

    ll ans = pos(k);
    for(int i = 1; i<=a; i++){
        ans-= pos(cnta[i]);
    }

    for(int i = 1; i<=b; i++){
        ans-= pos(cntb[i]);
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