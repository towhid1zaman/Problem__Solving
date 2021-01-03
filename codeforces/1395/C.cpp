
// </> : towhid1zaman

#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
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
#define sz(a) int(a.size())
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

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = (int)3e18;
const int maxn = 500;

/*
 *
 */

vector<vector<ll>>mat(maxn, vector<ll>(maxn));
void task(){
	int n, m; cin >> n >> m;
	vll a(n), b(m);
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	rep(i, n)rep(j,m){
		mat[i][j] = a[i]&b[j];
	}
	for(int A = 0; A < (1<<9); A++){
		bool ans = 0;
		rep(i,n){
			bool ok = 0;
			rep(j,m){
				if((A|mat[i][j]) == A){
					ok = 1;
					break;
				}
			}
			if(!ok){
				ans = 1;
				break;
			}
		}
		
		if(!ans){
			cout << A << endl;
			return;
		}
	}
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


