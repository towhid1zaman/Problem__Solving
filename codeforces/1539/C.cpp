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
const int mod = 1000000007;

void task(){
    ll n, k, x; cin >> n >> k >> x;
    
    vll a(n), dif;
    rep(i, n) cin >> a[i];

    ll ans = 0;
    sort(all(a));
    rep1(i,1, n-1){
        ll now = a[i]-a[i-1]-1;
        if(a[i]-a[i-1] > x){
            dif.push_back(now/x);
        }
    }
    sort(all(dif)); reverse(all(dif));
    while(dif.size() > 0){
        if(dif.back() <= k)k-=dif.back(), dif.pop_back();
        else break;
    }
    ans = dif.size() + 1ll;
    cout << ans << endl;
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