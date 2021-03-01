/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll p[39], pre[39];
void advance(){
    p[0] = 1;
    for(ll i = 1; i<=38; i++){
        p[i] = p[i-1]*3;
        pre[i] = pre[i-1] + p[i-1];
    }
}
void task(){
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 38; i>=0; i--){
        if(n > pre[i]){
            ans+=p[i];
            n-=p[i];
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    advance();
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}