/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 10000007;
const int mod = 1000000007;

ll dp[maxn];
void task(){
    dp[1] = 0, dp[2] = 3;
    for(int i = 3; i<=maxn;i++){
        dp[i] = (dp[i - 1]*2 + dp[i-2]*3)%mod;
    }
    int steps; cin >> steps;
    cout << dp[steps] << endl;
}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
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