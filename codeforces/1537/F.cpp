/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 2000006;
const int mod = 1000000007;


namespace Bipartie{
    std::vector<int> adj[maxn];
    std::vector<int> vis, col;
    void Clear(int n){
        for(int i = 0; i<=n; i++){
            adj[i].clear();
        }
        vis.assign(n, 0);
        col.assign(n, -1);
    }

    void dfs(int x, int curcol, int& not_bipartite){
        vis[x] = 1;
        col[x] = curcol;
        for(auto v : adj[x]){
            if(col[v] == -1)dfs(v,curcol ^ 1, not_bipartite);
            else if(col[v] == curcol)not_bipartite = 0;
        }
    }
    int is_bipartie(int v){
        int bi_tie = 1;
        dfs(0,0,bi_tie);
        return bi_tie;
    }

    //check range
}using namespace Bipartie;

void task(){
    int n, m; cin >> n >> m;

    Clear(n);
    std::vector<int> current(n), target(n);

    for(int i = 0; i<n; i++){
        cin >> current[i];
    }

    for(int i = 0; i<n; i++){
        cin >> target[i];
    }

    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v; --u, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll sum = 0;
    if(is_bipartie(0) == 0){
        for(int i = 0; i<n; i++){
            sum += (target[i] - current[i]);
        }
        if( abs(sum)&1 )cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else{    
        for(int i = 0; i < n;i++){
            if(col[i] == 1)sum += (target[i] - current[i]);
            else sum -= (target[i] - current[i]);
        }
        if(sum != 0)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}