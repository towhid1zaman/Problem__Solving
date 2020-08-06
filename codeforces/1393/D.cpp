
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
const int maxn = 2000;
int n,m;
vector<vector<char>>f(maxn, vector<char>(maxn));
vector<vector<int>>dp(maxn, vector<int>(maxn, 1));
bool chek(int i, int j){
    if(j != 0 and j + 1 < m and i-2 >= 0 and f[i][j] == f[i-2][j] and f[i][j] == f[i-1][j-1] and f[i][j] == f[i-1][j] and f[i][j] == f[i-1][j+1]){
        return true;
    }
    return false;
}
void task(){
    
    cin >> n >> m;
    ll ans = 0;
    rep(i,n)rep(j,m){
        cin >> f[i][j];
        if(chek(i,j)){
            dp[i][j]=min( min(dp[i-2][j], dp[i-1][j-1]),dp[i-1][j+1] ) + 2;
        }
        ans+=(dp[i][j]+1)/2;
    }

    cout << ans << endl;
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

