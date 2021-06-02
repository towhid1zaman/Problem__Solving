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
    int n; cin >> n;
    ll x; cin >> x;
    std::vector< pair<ll, ll> > v;
    for(int i = 0; i<n;i++){
        ll a; cin >> a;
        v.emplace_back(a, 1ll);
    }

    for(int i = 0; i<v.size(); i++){
        ll p = v[i].first, q = v[i].second;
        if(p%x)break;
        v.emplace_back(p/x, q*x);
    }

    ll ans = 0;
    for(int i = 0; i<v.size(); i++){
        ans += v[i].first * v[i].second;
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