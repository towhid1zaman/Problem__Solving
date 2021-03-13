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

void task(){
    int n; cin >> n;
    std::vector<ll>a(n), b(n);
    for(int i = 0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    std::vector<ll>tm(n);
    for(int i = 0; i<n; i++){
        cin >> tm[i];
    }
    ll ans  = a[0] + tm[0];
    for(int i = 0; i<n-1; i++)ans =max(b[i],ans+(b[i]-a[i]+1)/2)+tm[i+1]+a[i+1]-b[i];

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
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