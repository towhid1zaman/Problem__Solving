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
const int maxn = 1e5+5;

/*
 *
 */

int n,m;
vector<int>g[maxn];
vector<int> topo; //Stores the Topological Order
bool toposort() //Returns 1 if there exists a toposort, 0 if there is a cycle
{	
	
	priority_queue<int> pq; // small value first
	vector<int> indeg(n + 1, 0);
	for(int i=1;i<=n;i++)
		for(auto &it:g[i])
			indeg[it]++;
	for(int i=1;i<=n;i++)
	{
		if(!indeg[i])
			pq.push(i);
	}
	for(int i =n; i>=1; i--)
	{
		int u=pq.top();
		pq.pop();
		topo[u] = i;
		for(auto &v:g[u])
		{
			indeg[v]--;
			if(!indeg[v])
				pq.push(v);
		}
	}
	if(topo.size()<n)
		return 0;
	return 1;
}
 
void task(){
	cin >> n >> m;
	for(int i = 1; i<=m; i++){
		ll u,v; cin >> u >> v;
		g[v].pb(u);
	}
	topo.resize(n+1,0);
	toposort();
	for(int i = 1; i<=n; i++)
		cout<<topo[i]<<" ";

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

