
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
const int maxn = 223332;

/*
 *
 */

std::vector<int>adj[maxn];
int vis[2][maxn];
ll dist[2][maxn], par[maxn], ways[2][maxn];


void bfs(int source, int index){
	queue<int>q;
	q.push(source);
	vis[index][source] = 1, dist[index][source] = 0, par[source] = -1;
	ways[index][source] = 1;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(auto child:adj[node]){
			if(!vis[index][child]){
				q.push(child);
				vis[index][child] = 1;
				dist[index][child] = dist[index][node] + 1;
				par[child] = node;
				ways[index][child] += ways[index][node];
			}
			else{
				if(dist[index][node]+1 == dist[index][child]){
					ways[index][child] += ways[index][node];
				}
			}
		}
	}
}

void task(){

	int n, m; cin >> n >> m;
	for(int i = 1;i<=m; i++){
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(1, 0);
	bfs(n,1);

	
	ll total_ways = ways[0][n];
	long double mx = 0;
	for(int i = 1; i<=n; i++){
		if(dist[0][i] + dist[1][i] == dist[0][n]){
			int roads = 1;
			if(i!=1 and i!=n) roads = 2;
			long double now = roads * ways[0][i] * ways[1][i];
			mx = max(now, mx);
		}
	}

	sp(12);
	long double ans = (long double)(mx/total_ways);
	cout << ans;
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


