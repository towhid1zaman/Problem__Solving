/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 2000005;
const int mod = 998244353;
vll cur(maxn, 0), dp(maxn, 0), now(maxn, 0);
void pre(ll n){
    ll mx = n*2;
    for(ll i = 2; i<=mx;i+=2){
        for(ll j = i; j<=mx; j+=i){
            cur[j]++;
        }
    }
}
ll go(ll n){
    dp[0] = 1;
    dp[1] = 1;
    now[0] = 1;
    now[1] = 2;
    for(ll i = 2; i<=n; i++){
        ll next_pos = 2*i;
        dp[i] = (now[i-1] + cur[next_pos]-1)%mod; now[i] = (dp[i] + now[i-1])%mod;
    }
    return dp[n];
}
void task(){
    ll n; cin >> n;
    pre(n);
    cout << go(n) << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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