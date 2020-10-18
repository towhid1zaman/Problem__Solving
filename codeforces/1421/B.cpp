

// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define deb(x) cout<<#x <<"="<<x<<endl;
#define present(v,x) ((v).find(x)!=(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define sp(k) cout<<setprecision(k)<<fixed;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()

#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)

#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define yn(k) if(k)puts("YES");else puts("NO");

vi mods = {1000000007, 1000000009, 998244353};
const double pi = acos(-1.0);
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

/*
 *
 */

void task(){
        int n; cin >> n;
        ll a[n][n];
        std::vector<pair<ll,ll>> ans;
        rep(i,n){
          rep(j, n){
            char c; cin >> c;
            a[i][j] = c - '0';
          }
        }
        if(a[1][0] ^ a[0][1]){
          if(a[n-1][n-2] ^ a[n-2][n-1]){
            ans.emplace_back(2,1);
            if(a[n-1][n-2] != a[1][0]){
              ans.emplace_back(n,n-1);
            }
            else ans.emplace_back(n-1,n);
          }
          else{
            if(a[1][0] == a[n-1][n-2]) ans.emplace_back(2,1);
            else ans.emplace_back(1,2);
          }
        }
        else{
          if(a[n-1][n-2] ^ a[n-2][n-1]){
            if(a[1][0] == a[n-1][n-2])ans.emplace_back(n,n-1);
            else ans.emplace_back(n-1,n);
          }
          else{
            if(a[1][0] == a[n-1][n-2]){
              ans.emplace_back(n,n-1);
              ans.emplace_back(n-1,n);
            }
           
          }
        }
        cout << ans.size() << endl;
        for(auto x:ans){
          cout << x.ff <<' '<<x.ss << endl;
        }

}

int main(){
        _
#ifdef OJ
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        int T = 1; cin >> T;
        for(int __ = 1; __ <= T; __++){
            //cout <<"Case "<<__<<": ";
            task();
        }


/*array size ?
 *n==1 ?
 *different approach ?
*/        
return 0;
}





