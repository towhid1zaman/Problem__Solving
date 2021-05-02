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
    ll n, l, r; cin >> n >> l >> r;
    vll a(n, 0), L(l, 0), R(r, 0);
    vector<vector<ll>>Now(n+1, vector<ll>(2, 0));
    rep(i, n){
        cin >> a[i]; if(i < l)Now[a[i]][0]++; else Now[a[i]][1]++;
    }
    r = 0;
    l = 0;
    ll lil = 0, rir = 0;
    ll ans = 0, chek = 0;
    rep(i, n+1){
        if(Now[i][0] + Now[i][1] == 0){
            continue;
        }
        chek = min(Now[i][0] , Now[i][1]);
        Now[i][0]-=chek;Now[i][1]-=chek;
        l+=Now[i][0], r+=Now[i][1];
        lil+=(Now[i][0]/2), rir += (Now[i][1]/2);     
    }
    if(r > l){
        swap(lil, rir);
        swap(l, r);
    }
    chek = (l-r)/2;
    ll an = min(lil, chek);
    if(chek >= 1)ans+=an, l-=an*2;
    an = min(l,r);
    ans+=an; l-=an, r-=an; ans+=(l+r);
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