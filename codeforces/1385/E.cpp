
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

int n,m;
int res[maxn];
int Nu[maxn],Nv[maxn],t[maxn];
int pos[maxn];
vector<int>adj[maxn];
vector<int>sorted;

bool topoSort(int n){
    sorted.clear();
    queue<int>q;
    vector<int>indegree(n+2,0);
    for(int i = 1; i<=n; i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    for(int i = 1; i<=n; i++){
        if(!indegree[i]){
            q.push(i);
        }
    }
    int indx = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        sorted.push_back(u);
        indx++;
        pos[u]=indx;
        for(auto v: adj[u]){
            indegree[v]--;
            if(!indegree[v]){
                q.push(v);
            }
        }
    }
    return (sorted.size()==n); // returns 1 if there exist a topo, returns 0 if exists a cycle

}



void task(){
    cin >> n >> m;
    for(int i =1; i<=n; i++){
        adj[i].clear();
    }
    for(int i = 1; i<=m;i++){
        cin >> t[i] >> Nu[i] >> Nv[i];
        if(t[i]==1)adj[Nu[i]].push_back(Nv[i]);
    }
    bool chek = topoSort(n);
    if(!chek){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for(int i = 1; i<=m; i++){
        if(t[i]==1) cout << Nu[i] <<' '<< Nv[i] << endl;
        else{
            if(pos[Nu[i]] > pos[Nv[i]]) cout <<Nv[i] << ' '<<Nu[i]<<endl;
            else cout << Nu[i] << ' ' << Nv[i] << endl;
        }
    }


}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


