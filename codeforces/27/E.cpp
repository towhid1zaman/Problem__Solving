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
const ll maxn = 1e18;
const int mod = 1000000007;

int n;
std::vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41};

ll go(int nod, ll cur_n, int pos){
    if(nod == n)return cur_n;

    ll ans = maxn;
    for(int e = 1; ;e++){
        cur_n *= primes[pos];
        if(cur_n > ans or ( nod*(e+1) > n))break;
        ans = min(ans, go( (nod*(e+1) ), cur_n, pos+1) );
    }
    return ans;
}
void task(){
    cin >> n;
    ll ans = go(1,1,0);
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