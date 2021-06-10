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
const int maxn = 2000006;
const int mod = 1000000007;


namespace prime_factorization{
    //sieve, before use it call generate function
    bool prime[15000105]; 
    void sieve(int n) { 
      for (ll i = 0; i <= n; i++) prime[i] = 1;
      for (ll p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
          for (ll i = p * p; i <= n; i += p) 
            prime[i] = false; 
        } 
      } 
      prime[1] = prime[0] = 0;
    }

    std::vector<ll>primelist;
    bool prime_generated = 0;

    void GenPrimes(int n){
        prime_generated = 1;
        sieve(n+1);
        for(ll i = 2; i<=n; i++){
            if (prime[i]) primelist.push_back(i);
        }
    }
    // prime factors
    std::vector<ll>factors(ll n) {
        if (!prime_generated) {
            cerr << "Call GenPrimes(int n) first" << endl;
            exit(1);
        }
        std::vector<ll> facs;
        for(ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
            if (n % primelist[i] == 0) {
              while (n % primelist[i] == 0) {
              n /= primelist[i];
              facs.push_back(primelist[i]);
              }
            }
        }
        if (n > 1) {
            facs.push_back(n);
        }
        sort(facs.begin(), facs.end());
        return facs;
    }

    //smallest prime factor
    ll lp[10000005];
    void Smallest_prime_factor(){
        fill(lp, lp+10000005, 0);
        for(ll i=2;i<=10000000;i++){
            if(lp[i]==0)
            for(ll j=i*i;j<=10000000;j+=i){
                if(lp[j]==0)
                lp[j]=i;
            }
            if(lp[i]==0)lp[i]=i;
        }
    }    
}using namespace prime_factorization;

void task(){
    ll a, b, k; cin >> a >> b >> k;
    vll pfa = factors(a), pfb = factors(b);
    int sz  = (int)pfa.size()+ (int)pfb.size();
    if(k==1){
        if(a!=b and (a%b==0 or b%a==0)){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << ((k <=  sz)? "YES":"NO") << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    GenPrimes(1000000);
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}