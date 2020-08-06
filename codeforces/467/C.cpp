
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

ll n,m,k;
ll dp[5555][5555];
ll pref[5555];
vll a;

ll solve(ll pos, ll rest){
	if(pos>n){
		if(rest==(k+1))return 0;
		else return -inf;
	}

	ll &res = dp[pos][rest];
	if(res!=-1)return res;
	ll ans = -inf;
	if(pos+m-1<=n and rest<=k){
		ans = max(ans, pref[pos+m-1]-pref[pos-1]+solve(pos+m, rest+1));
	}
	ans = max(ans, solve(pos+1, rest));
	return res = ans;
}
void task(){
	cin >> n>> m >> k;
	a.resize(n);
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	pref[0] = a[0];
	for(int i = 1; i<n; i++){
		pref[i] = pref[i-1]+a[i];
	}
	fill(dp,-1);
	ll ans = solve(0,1);
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


