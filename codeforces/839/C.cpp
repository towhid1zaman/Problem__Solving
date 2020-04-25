
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

double ans = 0.0;
vi adj[maxn];
void dfs(int node, int dad, double probability, int depth){
    int below = 0;
    for(auto child: adj[node]){
        if(child!=dad){
            below++;
        }
    }

    for(auto child : adj[node]){
        if(child!=dad){
            dfs(child,node,probability/below, depth+1);
        }
    }

    if(below==0){
        ans+=probability*depth;
    }
}

int main(){
        _ios;
        int n; cin >> n;
        for(int i = 0; i<n-1; i++){
            int u,v; cin >> u >> v;
            --u,--v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        dfs(0,0,1.0,0);
        sp(15);
        cout<<ans<<endl;

return 0;
}

