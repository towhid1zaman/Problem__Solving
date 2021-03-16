/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    ll n, mod; cin >> n >> mod;

    std::vector<ll>fac(n+1, 1);
    for( ll i = 1; i<=n; i++){
        fac[i] = fac[i-1]*i%mod;
    }

    ll ans = 0;

    for(ll i = 1; i<=n; i++){
        ll val = fac[i] * fac[n-i] % mod;
        val%=mod;
        val*=(n-i+1);
        val%=mod;
        val*=(n-i+1);
        val%=mod;
        ans+=val;
        ans%=mod;
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

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}