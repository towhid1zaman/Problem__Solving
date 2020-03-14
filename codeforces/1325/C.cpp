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
const int maxn = 100010;
int adj[maxn][2];
int vis[maxn];
pair<int,int>dhukteche[maxn];
map<pair<int,int>, int> res;
/*
void bfs(int src){
    queue<int>q;
    q.push(src);
}
*/
int main(){
        _ios;

        int n; cin >> n;
        rep(i,n-1){
//            int u, v; cin >> u >> v;
//            adj[u].pb(v);
//            adj[v].pb(u);
//            dhukteche[i] = {u,v};
            cin >> adj[i][0] >> adj[i][1];
            ++vis[adj[i][0]];
            ++vis [adj[i][1]];

        }
//        int start = 1;
//        int mx = 0;
//        rep1(i,1,n){
//            if(adj[i].size()>mx){
//                mx = adj[i].size();
//                start = i;
//            }
//        }
//        bfs(start);
//        rep(i,1,n){
//            cout<<ans[dhukteche[i]]<<endl;
//        }
        int choto = 0, boro  = n-2;
            rep(i,n-1){
                if(vis [adj[i][0]]==1 or vis [adj[i][1]]==1){
                    cout<<choto<<endl;
                    choto++;
                }
                else{
                    cout<<boro<<endl;
                    boro--;
                }
            }


return 0;
}





