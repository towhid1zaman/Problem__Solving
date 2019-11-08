#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"

const int mod = 1000000007; // (int)1e9+7
const int N = 200100;
vector<int>edge[N];
int given[N];
int vis[N];
set<int>chek;
bool bfs(int s){
    memset(vis,0,sizeof(vis));
    int cnt  = 1;
    if(given[cnt++] != 1){
        return false;
    }

    queue<int>q;
    q.push(s);
    while(q.size()>0){
        int u = q.front();
        q.pop();
        set<int>chek;
        for(int i = 0; i<edge[u].size();i++){
            int v = edge[u][i];
            chek.insert(v);
        }
        for(int i = 0; i<edge[u].size();i++)
        {
            int v = given[cnt+i];
            if(!vis[v]){
                if(chek.find(v)==chek.end()){
                    return false;
                }
                q.push(v);
                vis[v]=1;
            }
        }
        cnt+= edge[u].size() -1;

    }
    return true;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    for(int i = 1; i<=n-1;i++){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    for(int i = 1; i<=n;i++){
        cin>>given[i];
    }
    if(bfs(1))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

return 0;
}




