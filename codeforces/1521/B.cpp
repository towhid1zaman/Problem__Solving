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
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 200005;
const int mod = 1000000007;
ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}

void task(){
    int n; cin >> n;
    vll a(n);
    ll g = 0;
    rep(i, n){
      cin >> a[i];
      g = gcd(g, a[i]);
    }
    int op = n-1;
    cout << op << endl;
    //ll mn = *min_element(all(a));
    //int mn_pos = lower_bound(all(a), mn) - a.begin();
    int mn_pos = min_element(all(a))-a.begin();
    //cout << mn_pos << endl;
    ll A = a[mn_pos];
    ll B = A + 1;
    irep(i, mn_pos - 1, 0){
      cout << mn_pos + 1 << ' ';
      cout << i+1 <<' '<< A << ' ';
      cout << B << endl;
      B++;
    }
    B = A + 1;
    rep1(i, mn_pos+1, n-1){
      cout << mn_pos + 1 << ' ';
      cout << i+1 <<' '<< A << ' ';
      cout << B << endl;
      B++;
    }
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