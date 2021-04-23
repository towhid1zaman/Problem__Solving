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
    int n, m; cin >> n >> m;
    std::vector<pair<int, pair<int, int>>> p;
    std::vector<vector<int>>b(n, vector<int>(m, 0));
    std::vector<vector<int>>a(n, vector<int>(m, 0));
    rep(i, n){
        rep(j, m){
            cin >> a[i][j];
            p.push_back({a[i][j], {i,j}});
        }
    }
    int now = 0;
    sort(all(p));
    rep(i, m){
        int v = p[i].first, ff = p[i].second.first, ss = p[i].second.second;
        a[ff][ss] = 0, b[ff][now++] = v;
    }

    rep(i, n){
        int cur = 0;
        rep(j, m){
            if(b[i][j])cout << b[i][j]<<' ';
            else{
                while(a[i][cur] == 0)cur++;
                cout << a[i][cur]<<' ';
                cur++;
            }
        }
        cout << endl;
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