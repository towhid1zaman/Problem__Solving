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
#define rep(i,a) for(ll i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n; cin >> n;
    vll a(n), cur;
    ll ans = 0;
    rep(i, n) cin >> a[i];
    ll sum = 0;
    rep(i, n){
        sum+=a[i]; ans++;
        if(a[i] >= 0)continue;
        if(cur.size() < 1) cur.push_back(a[i]);
        else{
            rep(j, cur.size()){
                if( cur[j] < a[i] ){
                    cur.insert(cur.begin()+j, a[i]); break;
                }
                if( j == cur.size()-1 ){
                    cur.push_back(a[i]);break;
                }
            }
        }
        while( sum < 0 ){
            //if(sum >= 0 )break;
            sum-=cur.back();ans--;
            cur.pop_back();
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