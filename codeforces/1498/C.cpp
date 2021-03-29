/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(ll i=0;i<a;i++)
#define rep1(i,a,b) for(ll i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()
const int maxn = 1111;
const int mod = 1000000007;
vector<vector<int>>dp(maxn, vector<int>(maxn, 0));
ll go(ll n, ll k){
    rep1(i, 1, k){
        rep(j, n+1){
            if(i==1 or j == 0){
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = (dp[i][j-1] + dp[i-1][n-j] )%mod;
        }
    }
    return dp[k][n];
}
void task(){
    ll n,k; cin >> n >> k;
    ll ans = go(n, k);
    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}