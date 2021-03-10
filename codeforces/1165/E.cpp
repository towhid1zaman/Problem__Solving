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
const int mod = 998244353;
/*
if we multiply big value with small value and take this sum we 
get minimal number.
*/
void task(){
    ll n; cin >> n;
    std::vector<ll>b(n);
    std::vector<ll>NumberOfTimesMultA;
    for(ll i = 1; i<=n; i++){
        ll a; cin >> a;
        ll now = a * (i * ( n- i + 1));
        NumberOfTimesMultA.push_back(now);
    }

    for(ll i = 0; i<n; i++){
        cin >> b[i];
    }
    sort(all(NumberOfTimesMultA));
    sort(all(b));
    reverse(all(b));

    ll ans = 0;
    for(ll i = 0; i<n;i++){
        NumberOfTimesMultA[i]%=mod;
        ans += b[i] * NumberOfTimesMultA[i];
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