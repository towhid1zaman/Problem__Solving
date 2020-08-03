
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

//binary exponentiation
ll bxpo(ll x,ll n){
    ll res = 1;
    while(n>0){
        if(n%2==1){
            res = res*x;
        }
        x = x*x;
        n = n/2;
    }
    return res;
}
//prime factorization
vector<pair<ll,ll>>factorize(ll a){
    vector<pair<ll,ll> > pf;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i) continue;
        pf.emplace_back(i, 0);
        while (a % i == 0) {
            ++pf.back().second;
            a /= i;
        }
    }
    if (a > 1) {
        pf.emplace_back(a, 1);
    }
    return pf;
}
void task(){
    ll n,k; cin >> n >> k;
    ll ans = 0;
    std::map<ll, ll> freq;
    
    while(n--){
        ll a; cin >> a;
        std::vector<pair<ll,ll>>pf = factorize(a);
        ll me = 1, other = 1;
        for (auto &x: pf) {
            ll p = x.first;
            ll c = x.second;
            me *= pow(p, c % k); 
            other *= pow(p, (k - c % k) % k);
        }
        ans+=freq[other];
        ++freq[me];
    }
    cout << ans << endl;

}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


        