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
const ll mod = 9999999999999999ll;

void task(){
    int n; cin >> n;
    std::vector<ll> a(n+1), b(n+1);
    std::vector<vector<ll>>dp(2, vector<ll>(n+1, 0));
    for(int i = 1;i<=n; i++){
        cin >> a[i]; b[i] = a[i];
    }
    sort(all(b));

    for(int i = 1, indx = 1; i <= n;i++, indx^=1){
        dp[indx][0] = mod;
        for(int j = 1; j<=n; j++){
            dp[indx][j] = abs(a[i]-b[j]) + dp[indx^1][j];
            dp[indx][j] = min(dp[indx][j], dp[indx][j-1]);
        }
    }

    cout << dp[(n%2)][n] << endl;
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