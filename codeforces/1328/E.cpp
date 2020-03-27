
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200010;

vi adj[maxn];
int chek[maxn], pa[maxn], rt[maxn], lft[maxn], cnt=0;

int  dfs(int node, int p){
    chek[node] = chek[p] + 1;
    pa[node] = p;
    lft[node] = cnt++;
    for(auto child : adj[node]){
        if(child!=p){
            dfs(child,node);
        }
    }
    rt[node] = cnt;
}

int main(){
        _ios;

        int n, m; cin >> n >> m;
        for(int i = 1;i<=n-1; i++){
            int a,b; cin >> a >> b;
            adj[a].pb(b), adj[b].pb(a);
        }
        dfs(1,1);
        while(m--){
            int k; cin >> k;
            vector<pair<int,int>> ans;
            for(int i = 0; i<k; i++){
                int u; cin >> u;
                u = pa[u];
                ans.pb({chek[u],u});
            }

            sort(all(ans));
            bool ok = true;
            for(int i = sz(ans)-1; i>=1; i--){
                int a = ans[i-1].ss, b= ans[i].ss;
                if(!(lft[a]<=lft[b] and rt[b]<=rt[a])){
                    ok = false;
                    break;
                }
            }
            if(ok)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

return 0;
}






