
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

vll adj[maxn];
vll dis;
vll cnt;

void dfs(ll node,ll dad=-1){
    cnt[node] = 1;
    for(auto child : adj[node]){
        if(child!=dad){
            dis[child] =dis[node]+1;
            dfs(child,node);
            cnt[node]+=cnt[child];
        }
    }
}

int main(){
        _ios;

        ll n,k; cin >> n >> k;
        //adj.resize(n);
        cnt.resize(n,0);
        dis.resize(n,0);
        ll res = 0;
        rep(i,n-1){
            ll a,b; cin >> a >> b;
            a--,b--;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        dfs(0);
        multiset<ll>sera;
        rep(i,n){
            ll x = (dis[i]-cnt[i]+1);
            sera.insert(x);
        }
        while(k>0){
            k--;
            ll x = *(--sera.end());
            //cout<<x<<endl;
            res+=x;
            sera.erase(--sera.end());
        }
        cout<<res<<endl;


return 0;
}


