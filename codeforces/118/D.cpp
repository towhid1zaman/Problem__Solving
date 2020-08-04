
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< ll, ll > pii;
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
const int mod = 100000000; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

ll n1,n2,mxk1,mxk2; 
ll dp[101][101][11][11];

ll f(ll n1,ll n2,ll k1,ll k2){
	//base case
	if(n1<0 or n2<0 or k1<0 or k2<0)return 0;
	if(n1==0 and n2==0)return 1;

	ll &res = dp[n1][n2][k1][k2];
	if(res!=-1)return res;
	res =  f(n1-1,n2,k1-1,mxk2) + f(n1,n2-1,mxk1,k2-1);
	res%=mod;
	return res;
}
void task(){
	cin >> n1 >> n2 >> mxk1 >> mxk2;
	fill(dp,-1);
	ll ans = 0;
	ans = f(n1,n2,mxk1,mxk2);
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


