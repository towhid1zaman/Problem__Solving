/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 1000005;
const int mod = 1000000007;


ll derangements(ll n){
    std::vector<ll>d(n+1, 0);
    d[2] = 1ll;
    for(int i = 3; i<=n; i++){
        d[i] = (((d[i-1]+d[i-2])%mod)*(i-1))%mod;
    }
    return d[n];
}
ll Choose(ll n , ll k){
    if(k == 0)
        return 1;
    ll res = n;
    for(int i = 1 ; i < k ; ++i)
        res *= (n-i);
    for(int i = 1 ; i <= k ; ++i)
        res = res / i;
    return res;
}
void task(){
    ll n, k; cin >> n >> k;
    ll ans = 1;
    for( ll i = 0; i<=k; i++){
        ans+= (Choose(n, i) * derangements(i));
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