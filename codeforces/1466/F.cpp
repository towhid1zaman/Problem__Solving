

// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ll;
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
const int maxn = 500008;
const int mod = mods[0];

/*
 *
 */
struct disjoint{
        int fa[maxn];
        int sz[maxn];
        void Build(int n){
            for(int i = 0; i<=n; i++) fa[i]=i, sz[i] = 1;
        }
        int Find(int x){ 
            return x==fa[x]?x:fa[x]=Find(fa[x]);
        }
        void Union(int a, int b){ 
            a = Find(a), b = Find(b);
            if(a==b)return;
            if(sz[a] < sz[b]) swap(a,b);
            fa[b] = a;
            sz[a] += sz[b];
        }
        void Set(int x, int y){
            fa[x] = y;
        }
        int Size(int n){
            return sz[n];
        }
}dsu;

void task(){
        std::vector<int>ans,vis(maxn,0);
        ll tot = 0, tut = 1;
        int n, m; cin >> n >> m;
        dsu.Build(m);
        rep1(i,1,n){
            int k; cin >> k;
            if(k==1){
                int x; cin >> x;
                x = dsu.Find(x);
                if(vis[x])continue;
                else{
                    vis[x] = 1;tut = tut*2%mod; ans.push_back(i);
                }
            }else{
                int x,y; cin >> x >> y; x = dsu.Find(x), y = dsu.Find(y);
                if(x==y)continue;
                else{
                    if(vis[x] == 1 and vis[y] == 1) continue;
                    else if(vis[x] == 0 and vis[y] == 0){
                        dsu.Set(x,y);
                        tut = tut*2%mod; ans.push_back(i);
                    }else{
                        dsu.Set(x,y);
                        vis[y] = 1;
                        tut = tut*2%mod;  ans.push_back(i);
                    }
                }
            }
        }
        cout << tut <<' '<<ans.size() << endl;
        for(auto x:ans)cout << x<<' ';
        cout << endl;
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