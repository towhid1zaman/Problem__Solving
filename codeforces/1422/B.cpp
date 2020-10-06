
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

#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)

#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define yn(k) if(k)puts("YES");else puts("NO");

vi mods = {1000000007, 1000000009, 998244353};
const double pi = acos(-1.0);
const int inf = (int)3e18;
const int maxn = 200005;

/*
 *
 */
ll a[111][111];

int chek(vll val){
	ll mn = inf;

	for(auto x:val){
		ll res = 0;
		for(auto y:val){
			res += abs(x-y);
		}
		mn = min(mn, res);
	}
	return mn;
}

void task(){
	int n, m; cin >> n >> m;
	
	rep(i,n)rep(j,m){
		cin >> a[i][j];
	}

	int N  = (n+1)/2, M = (m+1)/2;
	ll ans = 0;
	rep(i,N){
		rep(j,M){
			vll val;
			val.pb(a[i][j]);
			if(i != n-1-i)val.pb(a[n-1-i][j]);
			if(j != m-1-j)val.pb(a[i][m-1-j]);
			if(i != n-1-i and j != m-1-j)val.pb(a[n-1-i][m-1-j]);
			ans += chek(val);
		}
	}

	cout << ans << endl;
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1,tc = 1; cin >> T;
        while(T--){
            //cout <<"Case "<<tc++<<": ";
            task();
        }
        
        
return 0;
}


