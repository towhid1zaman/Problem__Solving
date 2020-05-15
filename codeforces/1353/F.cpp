
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(ll i=0;i<a;i++)
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
const int maxn = 110;


ll a[maxn][maxn];
ll dp[maxn][maxn];
ll n,m;
ll min_path(ll i,ll j, ll val){
    if( i == (n-1) and j == (m-1)){
        if(a[i][j] < val) return dp[i][j] = 1e18;
        else return dp[i][j] = (a[i][j] - val);
    }

    if(i>=n or j>=m)return 1e18;
    if(a[i][j] < val) return 1e18;
    if(dp[i][j] != -1)return dp[i][j];

    ll make_change = a[i][j] - val;

    return dp[i][j] = make_change + min( min_path(i+1,j, val+1), min_path(i,j+1,val+1) );
}
int main(){
        _
        int T; cin >> T;
        while(T--){
                fill(a,0);
                cin >> n >> m;
                rep(i,n){
                    rep(j,m){
                        cin >> a[i][j];
                    }
                }

                ll ans = 1e18;

                for(ll i = 0; i<n; i++){
                    for(ll j = 0; j<m; j++){
                            rep(_i,n){
                                rep(_j,m){
                                    dp[_i][_j] = -1;
                                }
                            }

                            ll val = a[i][j] -(i+j);
                            ans = min(ans, min_path(0,0,val));
                    }
                }

                cout<<ans<<endl;
        }



return 0;
}


/*
min path calculation, from (0,0) to (n-1,m-1)
possible move: make besides, the two differences are 1
*/
