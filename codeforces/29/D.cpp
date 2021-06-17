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
vi adj[302];
int leaves[302];
vi vert[302];
int minn[302];
void dfs(int x,int par){
    if(leaves[x])vert[x].pb(leaves[x]);
    minn[x]=mod;
    if(leaves[x])minn[x]=leaves[x];
    for(auto i:adj[x]){
        if(i!=par){
            dfs(i,x);
            for(auto a:vert[i])vert[x].pb(a);
        }
    }
    for (int i = 0; i < vert[x].size(); ++i){
        minn[x]=min(minn[x],vert[x][i]);
    }
    for (int i = 0; i < (adj[x].size()); ++i){
        for (int j = 0; j < adj[x].size()-1; ++j){
            if(minn[adj[x][j]]>minn[adj[x][j+1]]){
                swap(adj[x][j],adj[x][j+1]);
            }
        }
    }
    sort(all(vert[x]));
    for (int i = 1; i < vert[x].size(); ++i){
        if(vert[x][i]!=vert[x][i-1]+1){
            cout<<-1<<endl;
            exit(0);
        }        
    }
}
void printdfs(int x,int par){
    cout<<x<<" ";
    for(auto i:adj[x]){
        if(i!=par){
            printdfs(i,x);
            cout<<x<<" ";
        }
    }
}
void task(){
    int n; cin>>n;
    int k = 0;
    for (int i = 0; i < n-1; ++i){
        int a,b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for (int i = 1; i < n; ++i){
        if((adj[i+1].size())==1)
            ++k;
    }
    for (int i = 0; i < k; ++i){
        int a;
        cin>>a;
        leaves[a]=i+1;
    }
    dfs(1,0);
    printdfs(1,0);    
}

int main(){
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