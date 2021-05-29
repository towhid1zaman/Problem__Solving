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
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int t, k; cin >> t >> k;

    std::vector<int> dp(maxn, 0), pref_sum(maxn, 0);
    
    for(int i = 1;i<k; i++){
        dp[i] = 1; // red
    }
    dp[k] = 2; //white
    for(int i = k+1; i<maxn; i++){
        dp[i] = (dp[i-1] + dp[i-k])%mod; // recurrence
    }
    for(int i = 1; i<=maxn; i++){
        pref_sum[i] = (pref_sum[i-1] + dp[i])%mod;
    }

    while(t--){
        int a, b; cin >> a >> b;
        int ans = (pref_sum[b] - pref_sum[a-1])%mod;
        if(ans < 0) ans+=mod;
        cout << ans << endl;
    }
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