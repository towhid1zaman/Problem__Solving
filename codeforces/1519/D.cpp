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

int n;
ll mx = 0;
void maxx(int L, int R, vll a, vll b){
    ll cur = 0;
    for(int l = L, r = R; l>=0 and r<n; l--, r++){
        cur += a[l] * b[r] + a[r] * b[l] - a[l] * b[l] - a[r] * b[r];
        mx = max(mx, cur);
    }
}
void task(){
    cin >> n;
    vll a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    ll total = 0 ;

    rep(i, n){
        total += a[i] * b[i];
    }

    rep(i, n){
        if(i+1 < n) maxx(i, i+1, a, b);
        if(i+2 < n) maxx(i, i+2, a, b);
    }

    cout << total + mx << endl;
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