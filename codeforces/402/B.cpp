

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
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
const int mod = mods[0];

/*array should be increasing order
 *difference between two adjacent element k
 *that means array should be 
 *a[i], a[i+1]+1k, a[i+2]+2k, a[i+3]+3k...
 *slect some random number (current)
 *then check their abs value
 *update minimum value
 *array indexed should be start with 1
 */

void task(){
        int n, k; cin >> n >> k;
        std::vector<int>a(n);
        rep(i, n) cin >> a[i];

        std::vector<pii>ans;
        int mn = inf;
        for(int current = 1; current<=1000; current++){
        	int cur = current, total = 0;
        	std::vector<pii>temp;
        	for(int i = 0; i<n; i++){
        		if(cur != a[i]){
        			total++;
        			temp.emplace_back(i+1,cur-a[i]);
        		}
        		cur+=k;
        	}
        	if(total < mn){
        		mn = total;
        		ans = temp;
        	}
        }

        cout << mn << endl;

        for(auto c: ans){
        	cout << (c.ss <0 ? '-' : '+')<<' ';
        	cout << c.ff<<' '<<abs(c.ss)<<endl;
        }

}

int main(){
        _
#ifdef OJ
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        int T = 1; //cin >> T;
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