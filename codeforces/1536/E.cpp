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
const int maxn = 200005;
const int mod = 1000000007;

        
namespace ModOperations{
    inline ll addmod(ll a,ll b){
        return ((a % mod) + (b % mod)) % mod;
    }
    inline ll submod(ll a,ll b){
        return ((a % mod) - (b % mod) + mod) % mod;
    }
    inline ll mulmod(ll a,ll b){
        return ((a % mod) * (b % mod)) % mod;
    }
    inline ll bigmod(ll a, ll e, ll m) {
        ll ret = 1LL;ll aa = (ll)a;
        while (e) {
            if (e&1) {
                ret *= aa;
                if(ret > m)ret %= m;
                e--;
            }
            aa *= aa;e /= 2;
            if(aa > m)aa %= m;
        }
        return ret;
    }
    inline ll invmod(ll base){
      return bigmod(base,mod-2, mod);
    }
    inline ll divmod(ll a, ll b) {
      return mulmod(a, invmod(b));
    }
}using namespace ModOperations;

void task(){
    int n, m; cin >> n >> m;
    ll ans = 1;
    bool other = false;
    for(int i = 1; i<=n; i++){
        string s; cin >> s;
        for(char c: s){
            if(c=='#'){
                ans = mulmod(ans, 2ll);
            }
            else other = true;
        }
    }
    if(!other)ans--;
    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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