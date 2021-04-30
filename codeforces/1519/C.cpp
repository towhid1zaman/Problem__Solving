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
    vi u(n), s(n);
    rep(i, n) cin >> u[i];
    vector<vector<int>>team(n+1);
    rep(i, n){
      cin >> s[i];
      team[ u[i] ].push_back(s[i]);
    } 

    std::vector<ll> res(n+1, 0);

    rep1(i,1,n){
        sort(all(team[i]));
        reverse(all(team[i]));
        int sz = team[i].size();
        vll cur({0});
        for(auto e: team[i]){
            cur.push_back(cur.back()+e);
        }
        for(int j = 1; j<=sz; j++){
            int now = (sz/j)*j;
            res[j]+=cur[now];
        }
    }

    rep1(i,1,n)cout << res[i]<<' ';cout << endl;

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