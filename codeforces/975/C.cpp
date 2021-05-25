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
    int n, q; cin >> n >> q;
    std::vector<ll>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    std::vector<ll>pref_sum(n+1, 0);
    for(int i = 0; i<n; i++){
        pref_sum[i+1] = pref_sum[i] + a[i];
    }

    ll tot_damage = 0;
    while(q--){
        ll k; cin >> k;
        tot_damage+=k;

        ll low = 1, high = n+1, mid;
        while(low < high){
            mid = (low + high) / 2;
            if(pref_sum[ mid ] > tot_damage){
                high = mid;
            }
            else low = mid + 1;
        }

        ll ans = n - (low - 1);
        if(ans == 0){
            ans = n;
            tot_damage = 0;
        }
        cout << ans << endl;
    }

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