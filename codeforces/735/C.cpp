/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 2000005;
const int mod = 1000000007;



void task(){
    ll n; cin >> n;
    std::vector<ll> v(100, 0);
    v[0] = 0;
    v[1] = 1;
    ll ans = 0;
    for(ll i = 2; i<=90; i++){
        v[i] =  v[i-1] + v[i-2];
        if(n >= v[i]){
            ans = i-2;
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

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}