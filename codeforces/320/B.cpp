

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
const int maxn = 1000;
const int mod = mods[0];

/*
 *
 */

std::vector< pii >adj; 


bool bfs(int x, int y){
    bool vis[maxn]{};
    queue<int>q;
    q.push(x);
    vis[x] = 1;
    while(!q.empty()){
        int src = q.front(); q.pop();

        int x1 = adj[src].ff, y1 = adj[src].ss;

        if(src == y) return true;

        for(int i = 0; i<adj.size(); i++){
            int NewX = adj[i].ff, NewY = adj[i].ss;
            if( (NewX < x1 and NewY > x1) or (NewX < y1 and NewY > y1) ){
                if(!vis[i]){
                    vis[i] = true;
                    q.push(i);
                }
            }
        }
    }

    return false;
}

void task(){
        int n; cin >> n;
        for(int i = 1; i<=n; i++){
            int type, x, y; cin >> type >> x >> y;
            if(type == 1){
                adj.emplace_back(x,y);    
            }
            else{
                yn( bfs(x-1, y-1) );
            }
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