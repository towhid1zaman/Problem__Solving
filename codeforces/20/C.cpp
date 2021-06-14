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
const int maxn = 100006;
const int mod = 1000000007;

namespace Dijkstra_Path{
    #define int long long
    const int range = 1000006;
    const long long inf = 1000000000000000000ll;
    typedef std::pair<int, int> pii;
    int dist[maxn];
    int par[maxn];
    std::vector<pii> adj[maxn];
    
    void clear(int n){
        for(int i = 0; i<=n; i++){
            dist[i] = inf;
            par[i] = 0;
        }
    }
    
    void dijkstra(int s, int n){
        priority_queue< pii, std::vector<pii> , greater< pii > > Q; // small value first
        dist[s] = 0;
        Q.push({0, s});

        while(!Q.empty()){
            int u = Q.top().second;
            int cur_d = Q.top().first;
            Q.pop();

            if(dist[u] < cur_d)continue;
            
            for(auto v : adj[u]){
                if(cur_d + v.second < dist[v.first]){
                    dist[v.first] = cur_d + v.second;
                    par[v.first] = u;
                    Q.push( {dist[v.first], v.first} );
                }
            }
        }
    }

    bool is_reached(int n){
        return dist[n] == inf;
    }
    
    std::vector<int> path_print(int s, int n){
        int u = n;
        std::vector<int> path;
        path.push_back(n);
        while ( par[u] != 0 ) {
            path.push_back ( par[u] );
            u = par[u];
        }
        reverse(path.begin(), path.end());
        return path;
    }
    //check range
}using namespace Dijkstra_Path;

void task(){
    int n, m; cin >> n >> m;
    for(int i = 1; i<=m; i++){
        int u, v, w; cin >> u >> v >> w;
        adj[u].push_back( {v, w} );
        adj[v].push_back( {u, w} );
    }
    clear(n);
    dijkstra(1, n);

    if(is_reached(n)){
        cout << -1 << endl;
        return;
    }

    std::vector<int> ans = path_print(1, n);
    for (auto u : ans ) cout << u <<' ';
    cout << endl;
}

main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}