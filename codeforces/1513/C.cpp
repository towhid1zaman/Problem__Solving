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
const int maxn = 200005;
const int mod = 1000000007;
vll dp(maxn, 0);
void go(){
    rep(i,9)dp[i] = 2; dp[9]=3;
    rep1(i,10,maxn)dp[i]=(dp[i-9]%mod + dp[i-10]%mod)%mod;
}
void task(){
    ll n, m; cin >> n >> m;
    ll cpn = n, ans = 0;
    while(cpn){
        int d = cpn%10;
        if(m >= 10-d)ans = (ans%mod+dp[m-(10-d)]%mod)%mod;
        else ans = (ans%mod+1)%mod;
        cpn/=10;
    }
    ans%=mod;
    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    go();
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}