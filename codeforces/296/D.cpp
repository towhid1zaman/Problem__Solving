
    // </> : towhid1zaman

    #include "bits/stdc++.h"
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<ll> vll;
    typedef pair< int, int > pii;
    typedef pair< pii, int > ppi;
    #define fill(a,b) memset(a,b,sizeof(a))
    #define all(v) (v).begin(),(v).end()
    #define sp(k) cout<<setprecision(k)<<fixed;
    #define rep(i,a) for(int i=0;i<a;i++)
    #define rep1(i,a,b) for(int i=(a);i<=(b);++i)
    #define irep(i,b,a) for(int i=(b);i>=(a);--i)
    #define minv(v) *min_element(all(v))
    #define maxv(v) *max_element(all(v))
    #define unq(v) (v).erase(unique(all(v)),(v).end())
    #define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl "\n"
    #define sqr(a) ((a)*(a))
    #define sz(a) int(a.size())
    #define ff first
    #define ss second
    #define pb push_back

    const double pi = acos(-1.0);
    const int mod = 1000000007; // (int)1e9+7
    const int inf = 0x3f3f3f3f;
    const int maxn = 600;

    ll a[maxn];
    ll ans[maxn];
    ll vis[maxn];
    ll dist[maxn][maxn];

    int main(){
            _
            ll n; cin >> n;
            for(int i = 1; i<=n; i++){
                for(int j = 1; j<=n; j++){
                    cin >> dist[i][j];
                }
            }
            for(int i = 1; i<=n; i++){
                cin >> a[i];
            }

            for(int idx = n; idx>=1; idx--){

                int k = a[idx];
                vis[k] = 1;

                    for(int i = 1; i<=n; i++){
                        for(int j = 1; j<=n; j++){
                            dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                            if(vis[i] and vis[j]){
                                ans[idx]+=dist[i][j];
                            }
                        }
                    }
            }

            for(int i = 1; i<=n; i++){
                cout<<ans[i]<<' ';
            }cout<<endl;


    return 0;
    }

