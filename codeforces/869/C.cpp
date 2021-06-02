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


namespace Combinatorics{
    //nCr = (n!/(r!*(n-r)!)
    //with store nCr
    std::vector<vector<ll>>Combi(101, vector<ll>(101, -1));
    ll C(ll a, ll b){

        if(b==0) return 1;
        if(a==b) return 1;

        if(Combi[a][b]!=-1) return Combi[a][b];

        Combi[a][b]=C(a-1,b)+C(a-1,b-1);
        return Combi[a][b];
    }
    //without store nCr
    ll ncr(ll n, ll r){
        ll res = 1;
        ll range = min(r, n-r);
        for(ll i = 1; i<=range; i++){
            res *= (ceil(n-i+1)/i);
        }
        return res;
    }

    //mod nCr
    ll fact[maxn],inv[maxn];
 
    ll BigMod(ll b,ll p,ll m){
        ll ret = 1;
        while(p > 0){
            if(p&1)ret = (ret * b) % m;
            p = p >> 1;
            b = (b * b) % m;
        }
        return ret;
    }
    bool build_fact = 0;
    void Build(ll n){
        build_fact = 1;
        fact[0] = 1;
        for(int i = 1;i <= n+2;i++){
            fact[i] = (fact[i - 1] * i) % mod;
        }
        for(int i = 0;i <= n+2;i++){
            inv[i] = BigMod(fact[i],mod-2,mod);
        }
    }
 
    ll Choose(ll n,ll r){
        if(!build_fact){
            cerr << "First Build(ll n) fact" << endl;
            exit(1);
        }
        if(n < r)return 0;
        ll u = fact[n];
        ll v = (inv[r] * inv[n - r]) % mod;
        return (u * v) % mod;
    }

    ll Factorial(ll n){
        return fact[n];
    }

    ll Dearrangement(ll n){
        std::vector<ll> d(n+1, 0);
        d[2] = 1;
        for(int i = 3; i<=n; i++){
            //d[i] = ( ((d[i-1]+d[i-2]))*(i-1) ); //without mod
            d[i] = (((d[i-1]+d[i-2])%mod)*(i-1))%mod;
        }
        return d[n];
    }
}using namespace Combinatorics;


void task(){
    ll a, b, c; cin >> a >> b >> c;
    
    ll x = 0;
    for(ll k = 0; k<=min(a, b); k++){
        ll now = Factorial(k);
        now%=mod;
        now*=Choose(a, k);
        now%=mod;
        now*=Choose(b, k);
        now%=mod;
        x+=now;
        x%=mod;        
    }
    
    ll y = 0;
    for(ll k = 0; k<=min(b, c); k++){
        ll now = Factorial(k);
        now%=mod;
        now*=Choose(b, k);
        now%=mod;
        now*=Choose(c, k);
        now%=mod;
        y+=now;
        y%=mod;  
    }

    ll z = 0;
    for(ll k = 0; k<=min(c, a); k++){
        ll now = Factorial(k);
        now%=mod;
        now*=Choose(c, k);
        now%=mod;
        now*=Choose(a, k);
        now%=mod;
        z+=now;
        z%=mod;  
    }

    ll ans  = ( ( (x*y)%mod )*z)%mod;
    cout << ans%mod << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Build(100005);
    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}