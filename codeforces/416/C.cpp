
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
const int inf = 100006;// (int)3e18;
const int maxn = 100005;
 
pii visitor[maxn],table[maxn];
void task(){
    int n;cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> visitor[i].first >> visitor[i].second;
    }
    int k; cin >> k;
    for(int i = 1; i<=k; i++){
        cin >> table[i].first;
        table[i].second = i;
    }

    sort(table+1,table+k+1);
    int ans = 0,mx = 0;
    
    for(int tab = 1; tab<=k; tab++){
        int now = 0;
        for(int i = 1; i<=n; i++){
            if(visitor[i].first>table[tab].first)continue;
            if(now==0 or visitor[i].second>visitor[now].second)now = i;
        }
        if(now!=0){
            mx++;
            ans+=visitor[now].second;
        }
        visitor[now].first = inf;
        table[tab].first = now;
    }
    cout << mx <<' '<< ans << endl;
    for(int i = 1; i<=k; i++){
        if(table[i].first==0)continue;
        cout << table[i].first <<' '<< table[i].second<<endl;
    }
 
}
int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }

return 0;
}


