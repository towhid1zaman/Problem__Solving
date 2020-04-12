
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
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
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


vi adj[maxn];
int chek[maxn];
int leaf[maxn];
void dfs(int n, int dad=-1){
    if(dad!=-1){
        chek[n] = chek[dad]+1;
    }
    for(auto child:adj[n]){
        if(child!=dad){
            dfs(child,n);
        }
    }
}


int main(){
        _ios;

        int n; cin >> n;
        vector<pair<int,int>>a;
        int up = 0;
        rep(i,n-1){
            int u,v; cin >> u >> v;
            u--;
            v--;
            a.pb({u,v});
            adj[u].pb(v);
            adj[v].pb(u);
        }
        rep(i,n){
            if(adj[i].size()>1){
                up = i;
                break;
            }
        }
        rep(i,n){
            if(adj[i].size()==1){
                leaf[adj[i][0]]++;
            }
        }
        int sum = 0;
        rep(i,n){
            if(leaf[i]>0){
                sum+=leaf[i]-1;
            }
        }
        //cout<<up<<endl;
        int e=0,o=0;
        dfs(up);
        rep(i,n){
            if(adj[i].size()==1){
                if(chek[i]%2==0)e=1;
                else o=1;
            }
        }
        if(e and o){
            cout<<3<<" "<<(n-1-sum)<<endl;
        }
        else cout<<1<<" "<<(n-1-sum)<<endl;



return 0;
}


