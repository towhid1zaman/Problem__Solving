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
    int n, k; cin >> n >> k;
    vll all, a, b;
    rep(i, n){
      int tt, aa, bb; cin >> tt >> aa >> bb;
      if(aa and bb)all.push_back(tt);
      else if(aa)a.push_back(tt);
      else if(bb)b.push_back(tt);
    }
    
    sort(all(a));
    sort(all(b));
    rep(i, min(a.size(), b.size())){
      all.push_back(a[i]+b[i]);
    }

    ll sum = 0;
    if(all.size() < k){
      cout << -1 << endl;
      return;
    }

    sort(all(all));
    rep(i, k){
      sum+=(all[i]);
    }
    cout << sum << endl;
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