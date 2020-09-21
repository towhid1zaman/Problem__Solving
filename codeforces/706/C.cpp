
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
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;


/*
 *
 */

ll n, c[maxn],dp[maxn][2];
string s[maxn][2]; //1 = reverse, 0 = not reverse

ll recur(int index, int rev){
	if(index>n)return 0;
	ll &ans = dp[index][rev];

	if(ans!=-1)return ans;
	ans = 1e15;
	if(s[index][0] >= s[index-1][rev]) ans = min(ans, recur(index+1, 0));
	if(s[index][1] >= s[index-1][rev]) ans = min(ans, c[index] + recur(index+1, 1));
	return ans;
}


void task(){

	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> c[i];
	}

	for(int i = 1; i<=n; i++){
		cin >> s[i][0];
		string t = s[i][0];
		reverse(all(t));
		s[i][1] = t;
	}

	fill(dp, -1);

	ll ans = min(recur(2,0), c[1]+recur(2,1));
	if(ans>=1e15) cout << -1 << endl;
	else cout << ans << endl;

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


