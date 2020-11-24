

// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define deb(x) cout<<#x <<"="<<x<<endl;
#define present(v,x) ((v).find(x)!=(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define sp(k) cout<<setprecision(k)<<fixed;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()

#define rep(i,a) for(ll i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)

#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define yn(k) if(k)puts("YES");else puts("NO");

vi mods = {1000000007, 1000000009, 998244353};
const double pi = acos(-1.0);
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 1000005;
const int mod = mods[0];

/*
 *
 */
bool checkprime[maxn + 5];
vll prime;
void sieve() {///false means prime
    prime.push_back(2);
    checkprime[0]=true;
    checkprime[1]=true;
    for (ll i = 3; i <= maxn; i += 2) {
        if (!checkprime[i]) {
            prime.push_back(i);
            for (ll j = i * i; j <= maxn; j += (i + i))
                checkprime[j] = true;
        }
    }
}
ll Pow(ll x,ll n){
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
void task(){
        ll n; cin >> n;

        if(n==2){
            cout << 1 <<endl<<2<<endl;
            return;
        }
        ll lim = min(100000ll, n);
        ll ans = 0ll, sol = n;
        for(ll i = 0; i<lim; i++){
            if(!checkprime[i]){
                ll cpn = n, cnt = 0;
                while(cpn%i==0 and (cpn/i)%i==0 and cpn>1){
                    cnt++;
                    cpn/=i;
                }
                if(cnt > ans){
                    ans = cnt;
                    sol = i;
                }
            }
        }
        ans++;
        cout << ans << endl;
        rep(i, ans-1) cout << sol <<' ';
        cout << (n/(ll)pow(sol, ans-1)) << endl;
}

int main(){
        _
#ifdef OJ
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
        sieve();
        int T = 1; cin >> T;
        for(int __ = 1; __ <= T; __++){
            //cout <<"Case "<<__<<": ";
            task();
        }


/*array size ?
 *n==1 ?
 *different approach ?
*/        
return 0;
}