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
    int n; cin >> n;
    std::vector< pair<ll, ll> > v;
    
    ll tot = 0;
    rep(i, n){
        ll a, b; cin >> a >> b;
        tot += a;
        v.emplace_back(b, a);
    }
    
    sort(all(v));

    ll cur = 0, ans = 0;
    int l = 0, r = n-1;

    while(cur != tot){
        if(v[l].first <= cur){
            ans += v[l].second; cur += v[l].second;
            v[l].second = 0; l++;
        }
        else{
            ll cur_dif = v[l].first - cur;
            while(true){
                if(cur == tot or cur_dif == 0)break;
                ll now = min(cur_dif, v[r].second);
                v[r].second -= now; cur_dif -= now; cur += now; ans += 2*now;
                if(cur_dif != 0)r--;
            }
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

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}