
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
const int maxn = 2000100;

vi adj[maxn], NewGraph[maxn];
int vis[maxn];
vector<pair<int,int>>ans;
set<int>connected;

void dfs(int node){
    vis[node] = 1;
    for(auto child:adj[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}

void bfs1(int s){
    queue<int>Q;
    Q.push(s);
    vis[s] = 1;
    vis[1] = 0;
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        for(auto child:adj[cur]){
            if(vis[child]==0){
                NewGraph[cur].pb(child);
                NewGraph[child].pb(cur);
                vis[child] = 1;
                if(child==1){
                    connected.insert(cur);
                }
                if(child != 1){
                    Q.push(child);
                }
            }
        }
    }
}

void bfs2(int s){
    queue<int>Q;
    Q.push(s);
    vis[s] = 1;
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        for(auto child:NewGraph[cur]){
            if(vis[child]==0){
                vis[child] = 1;
                //cout<<cur<<' '<<child<<endl;
                ans.pb({cur,child});
                Q.push(child);
            }
        }
    }
}

int main( ){
        _ios;

        int n,m,d,a,b;
        cin >> n >> m >> d;
        for(int i =1; i<=m; i++){
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        // we have to count number of connected components,
        //if we don't mark node 1 as visited then cc will be zero
        int cc = 0;
        vis[1] = 1;
        for(int i = 2; i<=n; i++){
            if(vis[i]==0){
                dfs(i);
                cc++;
            }
        }

        // Condition for "NO"
        if(d<cc or d>adj[1].size()){
            cout<<"NO"<<endl;
            return 0;
        }

        //else ans exists
        fill(vis);
        for(int i = 2; i<=n; i++){
            if(vis[i]==0){
                bfs1(i);
            }
        }
        fill(vis);
        int rem = d - cc;
        for(auto child: adj[1]){
            if(rem==0)break;
            if(connected.find(child) ==connected.end()){
                NewGraph[child].pb(1);
                NewGraph[1].pb(child);
                rem--;
            }
        }

        bfs2(1);
        cout<<"YES"<<endl;
        for(auto x: ans){
            cout<<x.ff<<' '<<x.ss<<endl;
        }


return 0;
}






