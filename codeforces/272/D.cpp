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
    std::map<ll, ll>cnt,same;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        cnt[ a[i] ]++;
    }
    for(int i = 0; i< n; i++){
        cin >>b[i];
        cnt[ b[i] ]++;
        if(a[i] == b[i])same[a[i]]++;
    }
    ll m; cin >> m;

    ll ans =  1;

    for(auto x:cnt){
        ll now = 1;
        ll tot = same[x.first];
        ll N = x.second;
        for(ll i = 1; i<=N; i++){
            ll p = i;
            while(p%2==0 and tot > 0){
                p/=2;
                tot--;
            }
            now*=p;
            now%=m;
        }
        ans*=now;
        ans%=m;
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