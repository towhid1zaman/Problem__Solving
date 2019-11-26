#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[ ] = {0,0,1,-1};
int dy4[ ] = {1,-1,0,0};
int dx8[ ] = {0,0,1,1,1,-1,-1,-1};
int dy8[ ] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
int x[maxn],y[maxn],vis[maxn];
vector<int>gx[maxn],gy[maxn];
int ans = -1;
void dfs(int k)
{
    if(vis[k]){
         return;
    }
       
    vis[k] = 1;
    for(auto it: gx[x[k]])
    {
        dfs(it);
    }
        
    for(auto it: gy[y[k]])
    {
        dfs(it);
    }
        
}
int main(){

    IOS;
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++)
    {
        cin>>x[i]>>y[i];
        gx[x[i]].pb(i);
        gy[y[i]].pb(i);
    }
    
    for(int i = 1; i<=n;i++)
    {
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<endl;



return 0;
}




