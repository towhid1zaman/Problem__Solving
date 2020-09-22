
// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
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
const ll inf =  3e18;
const int maxn = 200005;


/*
 *
 */

ll n, c[maxn],dp[maxn][2];
string s[maxn],t[maxn];

void task(){

	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> c[i];
	}

	//not reverse, reversed
	dp[0][0] = 0, dp[0][1] = 0;

	for(int i = 1;i<=n; i++){
		dp[i][0] = inf, dp[i][1] = inf;
		
		cin >> s[i];
		t[i] = s[i];

		reverse(all(t[i]));
		if(s[i] == s[i-1] or s[i] > s[i-1]){
			dp[i][0] = min(dp[i][0], dp[i-1][0]);
		}
		if(s[i] == t[i-1] or s[i] > t[i-1]){
			dp[i][0] = min(dp[i][0], dp[i-1][1]);
		}
		if(t[i] == t[i-1] or t[i] > t[i-1]){
			dp[i][1] = min(dp[i][1], c[i] + dp[i-1][1]);
		}
		if(t[i] == s[i-1] or t[i] > s[i-1]){
			dp[i][1] = min(dp[i][1], c[i] + dp[i-1][0]);
		}

	}

	ll ans = min(dp[n][0],dp[n][1]);
	if(ans == inf)ans = -1;
	cout << ans << endl;

}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1,tc = 1; //cin >> T;
        while(T--){
            //cout <<"Case "<<tc++<<": ";
            task();
        }
        
        
return 0;
}


