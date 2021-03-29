/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(int i=0;i<a;i++)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    ll n, w; cin >> n >> w;
    std::vector<ll> v(n);
    rep(i, n) cin >> v[i];
    sort(all(v));
    ll ans = 0 ;
    multiset<ll>m;
    for(int i = n-1; i>=0; i--){
        if(m.lower_bound(v[i]) == m.end()){
            ans++;
            if(w - v[i] > 0){
                m.insert(w-v[i]);
            }
        }
        else{
            ll now = *m.lower_bound(v[i]);
            m.erase(m.lower_bound(v[i]));
            if(now - v[i] > 0)m.insert(now-v[i]);
        }
    }
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